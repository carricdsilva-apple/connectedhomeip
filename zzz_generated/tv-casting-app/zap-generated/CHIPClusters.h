/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
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

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

#include <app-common/zap-generated/ids/Clusters.h>
#include <app-common/zap-generated/ids/Commands.h>

#include <controller/CHIPCluster.h>
#include <lib/core/CHIPCallback.h>
#include <lib/support/Span.h>

namespace chip {
namespace Controller {

class DLL_EXPORT AccountLoginCluster : public ClusterBase
{
public:
    AccountLoginCluster() : ClusterBase(app::Clusters::AccountLogin::Id) {}
    ~AccountLoginCluster() {}

    // Cluster Commands
    CHIP_ERROR GetSetupPINRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                  chip::CharSpan tempAccountIdentifier);
    CHIP_ERROR LoginRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                            chip::CharSpan tempAccountIdentifier, chip::CharSpan setupPIN);
    CHIP_ERROR LogoutRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
};

class DLL_EXPORT ApplicationBasicCluster : public ClusterBase
{
public:
    ApplicationBasicCluster() : ClusterBase(app::Clusters::ApplicationBasic::Id) {}
    ~ApplicationBasicCluster() {}
};

class DLL_EXPORT ApplicationLauncherCluster : public ClusterBase
{
public:
    ApplicationLauncherCluster() : ClusterBase(app::Clusters::ApplicationLauncher::Id) {}
    ~ApplicationLauncherCluster() {}

    // Cluster Commands
    CHIP_ERROR HideAppRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                              uint16_t catalogVendorId, chip::CharSpan applicationId);
    CHIP_ERROR LaunchAppRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                chip::CharSpan data, uint16_t catalogVendorId, chip::CharSpan applicationId);
    CHIP_ERROR StopAppRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                              uint16_t catalogVendorId, chip::CharSpan applicationId);
};

class DLL_EXPORT AudioOutputCluster : public ClusterBase
{
public:
    AudioOutputCluster() : ClusterBase(app::Clusters::AudioOutput::Id) {}
    ~AudioOutputCluster() {}

    // Cluster Commands
    CHIP_ERROR RenameOutputRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                   uint8_t index, chip::CharSpan name);
    CHIP_ERROR SelectOutputRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                   uint8_t index);
};

class DLL_EXPORT ChannelCluster : public ClusterBase
{
public:
    ChannelCluster() : ClusterBase(app::Clusters::Channel::Id) {}
    ~ChannelCluster() {}

    // Cluster Commands
    CHIP_ERROR ChangeChannelByNumberRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                            uint16_t majorNumber, uint16_t minorNumber);
    CHIP_ERROR ChangeChannelRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                    chip::CharSpan match);
    CHIP_ERROR SkipChannelRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                  uint16_t count);
};

class DLL_EXPORT ContentLauncherCluster : public ClusterBase
{
public:
    ContentLauncherCluster() : ClusterBase(app::Clusters::ContentLauncher::Id) {}
    ~ContentLauncherCluster() {}

    // Cluster Commands
    CHIP_ERROR LaunchContentRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                    bool autoPlay, chip::CharSpan data);
    CHIP_ERROR LaunchURLRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                chip::CharSpan contentURL, chip::CharSpan displayString, chip::CharSpan providerName);
};

class DLL_EXPORT KeypadInputCluster : public ClusterBase
{
public:
    KeypadInputCluster() : ClusterBase(app::Clusters::KeypadInput::Id) {}
    ~KeypadInputCluster() {}

    // Cluster Commands
    CHIP_ERROR SendKeyRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint8_t keyCode);
};

class DLL_EXPORT MediaInputCluster : public ClusterBase
{
public:
    MediaInputCluster() : ClusterBase(app::Clusters::MediaInput::Id) {}
    ~MediaInputCluster() {}

    // Cluster Commands
    CHIP_ERROR HideInputStatusRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR RenameInputRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint8_t index,
                                  chip::CharSpan name);
    CHIP_ERROR SelectInputRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                  uint8_t index);
    CHIP_ERROR ShowInputStatusRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
};

class DLL_EXPORT MediaPlaybackCluster : public ClusterBase
{
public:
    MediaPlaybackCluster() : ClusterBase(app::Clusters::MediaPlayback::Id) {}
    ~MediaPlaybackCluster() {}

    // Cluster Commands
    CHIP_ERROR FastForwardRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR NextRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR PauseRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR PlayRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR PreviousRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR RewindRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR SeekRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint64_t position);
    CHIP_ERROR SkipBackwardRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                   uint64_t deltaPositionMilliseconds);
    CHIP_ERROR SkipForwardRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                  uint64_t deltaPositionMilliseconds);
    CHIP_ERROR StartOverRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR StopRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
};

class DLL_EXPORT TargetNavigatorCluster : public ClusterBase
{
public:
    TargetNavigatorCluster() : ClusterBase(app::Clusters::TargetNavigator::Id) {}
    ~TargetNavigatorCluster() {}

    // Cluster Commands
    CHIP_ERROR NavigateTargetRequest(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                     uint8_t target, chip::CharSpan data);
};

} // namespace Controller
} // namespace chip
