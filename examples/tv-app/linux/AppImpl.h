/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 * @brief Manages Content Apps
 */

#pragma once

#include <app-common/zap-generated/enums.h>
#include <app/util/ContentApp.h>
#include <app/util/ContentAppPlatform.h>
#include <app/util/attribute-storage.h>
#include <functional>
#include <stdbool.h>
#include <stdint.h>

#include "include/account-login/AccountLoginManager.h"
#include "include/application-basic/ApplicationBasicManager.h"
#include "include/application-launcher/ApplicationLauncherManager.h"
#include "include/channel/ChannelManager.h"
#include "include/content-launcher/ContentLauncherManager.h"
#include "include/keypad-input/KeypadInputManager.h"
#include "include/media-playback/MediaPlaybackManager.h"
#include "include/target-navigator/TargetNavigatorManager.h"
#include <app/clusters/account-login-server/account-login-delegate.h>
#include <app/clusters/application-basic-server/application-basic-delegate.h>
#include <app/clusters/application-launcher-server/application-launcher-delegate.h>
#include <app/clusters/channel-server/channel-delegate.h>
#include <app/clusters/content-launch-server/content-launch-delegate.h>
#include <app/clusters/keypad-input-server/keypad-input-delegate.h>
#include <app/clusters/media-playback-server/media-playback-delegate.h>
#include <app/clusters/target-navigator-server/target-navigator-delegate.h>

#if CHIP_DEVICE_CONFIG_APP_PLATFORM_ENABLED

namespace chip {
namespace AppPlatform {

class DLL_EXPORT ContentAppImpl : public ContentApp
{
public:
    ContentAppImpl(const char * szVendorName, uint16_t vendorId, const char * szApplicationName, uint16_t productId,
                   const char * szApplicationVersion, uint32_t setupPIN) :
        mApplicationBasicDelegate(szVendorName, vendorId, szApplicationName, productId, szApplicationVersion),
        mAccountLoginDelegate(setupPIN),
        mContentLauncherDelegate({ "image/*", "video/*" },
                                 static_cast<uint32_t>(chip::app::Clusters::ContentLauncher::SupportedStreamingProtocol::kDash) |
                                     static_cast<uint32_t>(chip::app::Clusters::ContentLauncher::SupportedStreamingProtocol::kHls)),
        mTargetNavigatorDelegate({ "home", "search", "info", "guide", "menu" }, 0){};
    virtual ~ContentAppImpl() {}

    inline chip::app::Clusters::AccountLogin::Delegate * GetAccountLoginDelegate() override { return &mAccountLoginDelegate; };

    inline chip::app::Clusters::ApplicationBasic::Delegate * GetApplicationBasicDelegate() override
    {
        return &mApplicationBasicDelegate;
    };
    inline chip::app::Clusters::ApplicationLauncher::Delegate * GetApplicationLauncherDelegate() override
    {
        return &mApplicationLauncherDelegate;
    };
    inline chip::app::Clusters::Channel::Delegate * GetChannelDelegate() override { return &mChannelDelegate; };
    inline chip::app::Clusters::ContentLauncher::Delegate * GetContentLauncherDelegate() override
    {
        return &mContentLauncherDelegate;
    };
    inline chip::app::Clusters::KeypadInput::Delegate * GetKeypadInputDelegate() override { return &mKeypadInputDelegate; };
    inline chip::app::Clusters::MediaPlayback::Delegate * GetMediaPlaybackDelegate() override { return &mMediaPlaybackDelegate; };
    inline chip::app::Clusters::TargetNavigator::Delegate * GetTargetNavigatorDelegate() override
    {
        return &mTargetNavigatorDelegate;
    };

protected:
    ApplicationBasicManager mApplicationBasicDelegate;
    AccountLoginManager mAccountLoginDelegate;
    ApplicationLauncherManager mApplicationLauncherDelegate;
    ChannelManager mChannelDelegate;
    ContentLauncherManager mContentLauncherDelegate;
    KeypadInputManager mKeypadInputDelegate;
    MediaPlaybackManager mMediaPlaybackDelegate;
    TargetNavigatorManager mTargetNavigatorDelegate;
};

class DLL_EXPORT ContentAppFactoryImpl : public ContentAppFactory
{
#define APP_LIBRARY_SIZE 4
public:
    ContentAppFactoryImpl();
    virtual ~ContentAppFactoryImpl() {}

    ContentApp * LoadContentAppByVendorId(uint16_t vendorId);
    ContentApp * LoadContentAppByAppId(Application application);

protected:
    ContentAppImpl mContentApps[APP_LIBRARY_SIZE] = { ContentAppImpl("Vendor1", 1, "App1", 11, "Version1", 34567890),
                                                      ContentAppImpl("Vendor2", 2222, "App2", 22, "Version2", 34567890),
                                                      ContentAppImpl("Vendor3", 9050, "App3", 22, "Version3", 20202021),
                                                      ContentAppImpl("TestSuiteVendor", 1111, "applicationId", 22, "v2",
                                                                     20202021) };
};

} // namespace AppPlatform
} // namespace chip

#endif // CHIP_DEVICE_CONFIG_APP_PLATFORM_ENABLED
