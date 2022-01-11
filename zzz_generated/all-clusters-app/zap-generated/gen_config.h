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

// User options for plugin Binding Table Library
#define EMBER_BINDING_TABLE_SIZE 10

/**** Network Section ****/
#define EMBER_SUPPORTED_NETWORKS (1)

#define EMBER_APS_UNICAST_MESSAGE_COUNT 10

/**** Cluster endpoint counts ****/
#define EMBER_AF_ACCESS_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_ACCOUNT_LOGIN_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_ADMINISTRATOR_COMMISSIONING_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_APPLICATION_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_APPLICATION_LAUNCHER_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_AUDIO_OUTPUT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_BARRIER_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_BINARY_INPUT_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_BINDING_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_BOOLEAN_STATE_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_BRIDGED_ACTIONS_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_BRIDGED_DEVICE_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_CHANNEL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_COLOR_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_CONTENT_LAUNCH_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_DESCRIPTOR_CLUSTER_SERVER_ENDPOINT_COUNT (3)
#define EMBER_AF_DIAGNOSTIC_LOGS_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_DOOR_LOCK_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_ELECTRICAL_MEASUREMENT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_ETHERNET_NETWORK_DIAGNOSTICS_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_FIXED_LABEL_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_FLOW_MEASUREMENT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_GENERAL_COMMISSIONING_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_GENERAL_DIAGNOSTICS_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_GROUP_KEY_MANAGEMENT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_GROUPS_CLUSTER_SERVER_ENDPOINT_COUNT (3)
#define EMBER_AF_IAS_ZONE_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_IDENTIFY_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_ILLUMINANCE_MEASUREMENT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_KEYPAD_INPUT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_LEVEL_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_LOCALIZATION_CONFIGURATION_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_LOW_POWER_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_MEDIA_INPUT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_MEDIA_PLAYBACK_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_MODE_SELECT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_NETWORK_COMMISSIONING_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_OTA_PROVIDER_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_OTA_REQUESTOR_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_OCCUPANCY_SENSING_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_ON_OFF_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_ON_OFF_SWITCH_CONFIG_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_OPERATIONAL_CREDENTIALS_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_POWER_SOURCE_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_POWER_SOURCE_CONFIGURATION_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_PRESSURE_MEASUREMENT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_PUMP_CONFIG_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_SCENES_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_SOFTWARE_DIAGNOSTICS_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_SWITCH_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_TARGET_NAVIGATOR_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_TEMP_MEASUREMENT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_TEST_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_THERMOSTAT_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_THERMOSTAT_UI_CONFIG_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_THREAD_NETWORK_DIAGNOSTICS_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_USER_LABEL_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_WAKE_ON_LAN_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_WIFI_NETWORK_DIAGNOSTICS_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_WINDOW_COVERING_CLUSTER_SERVER_ENDPOINT_COUNT (1)

/**** Cluster Plugins ****/

// Use this macro to check if the server side of the Access Control cluster is included
#define ZCL_USING_ACCESS_CONTROL_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_ACCESS_CONTROL_SERVER
#define EMBER_AF_PLUGIN_ACCESS_CONTROL

// Use this macro to check if the server side of the Account Login cluster is included
#define ZCL_USING_ACCOUNT_LOGIN_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_ACCOUNT_LOGIN_SERVER
#define EMBER_AF_PLUGIN_ACCOUNT_LOGIN

// Use this macro to check if the server side of the AdministratorCommissioning cluster is included
#define ZCL_USING_ADMINISTRATOR_COMMISSIONING_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_ADMINISTRATOR_COMMISSIONING_SERVER
#define EMBER_AF_PLUGIN_ADMINISTRATOR_COMMISSIONING

// Use this macro to check if the server side of the Application Basic cluster is included
#define ZCL_USING_APPLICATION_BASIC_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_APPLICATION_BASIC_SERVER
#define EMBER_AF_PLUGIN_APPLICATION_BASIC

// Use this macro to check if the server side of the Application Launcher cluster is included
#define ZCL_USING_APPLICATION_LAUNCHER_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_APPLICATION_LAUNCHER_SERVER
#define EMBER_AF_PLUGIN_APPLICATION_LAUNCHER

// Use this macro to check if the server side of the Audio Output cluster is included
#define ZCL_USING_AUDIO_OUTPUT_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_AUDIO_OUTPUT_SERVER
#define EMBER_AF_PLUGIN_AUDIO_OUTPUT

// Use this macro to check if the server side of the Barrier Control cluster is included
#define ZCL_USING_BARRIER_CONTROL_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_BARRIER_CONTROL_SERVER
#define EMBER_AF_PLUGIN_BARRIER_CONTROL

// Use this macro to check if the server side of the Basic cluster is included
#define ZCL_USING_BASIC_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_BASIC_SERVER
#define EMBER_AF_PLUGIN_BASIC

// Use this macro to check if the server side of the Binary Input (Basic) cluster is included
#define ZCL_USING_BINARY_INPUT_BASIC_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_BINARY_INPUT_BASIC_SERVER
#define EMBER_AF_PLUGIN_BINARY_INPUT_BASIC

// Use this macro to check if the server side of the Binding cluster is included
#define ZCL_USING_BINDING_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_BINDING_SERVER
#define EMBER_AF_PLUGIN_BINDING

// Use this macro to check if the server side of the Boolean State cluster is included
#define ZCL_USING_BOOLEAN_STATE_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_BOOLEAN_STATE_SERVER
#define EMBER_AF_PLUGIN_BOOLEAN_STATE

// Use this macro to check if the server side of the Bridged Actions cluster is included
#define ZCL_USING_BRIDGED_ACTIONS_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_BRIDGED_ACTIONS_SERVER
#define EMBER_AF_PLUGIN_BRIDGED_ACTIONS

// Use this macro to check if the server side of the Bridged Device Basic cluster is included
#define ZCL_USING_BRIDGED_DEVICE_BASIC_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_BRIDGED_DEVICE_BASIC_SERVER
#define EMBER_AF_PLUGIN_BRIDGED_DEVICE_BASIC

// Use this macro to check if the server side of the Channel cluster is included
#define ZCL_USING_CHANNEL_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_CHANNEL_SERVER
#define EMBER_AF_PLUGIN_CHANNEL

// Use this macro to check if the server side of the Color Control cluster is included
#define ZCL_USING_COLOR_CONTROL_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER
#define EMBER_AF_PLUGIN_COLOR_CONTROL
// User options for server plugin Color Control
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_XY
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_TEMP
#define EMBER_AF_PLUGIN_COLOR_CONTROL_SERVER_HSV

// Use this macro to check if the server side of the Content Launcher cluster is included
#define ZCL_USING_CONTENT_LAUNCH_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_CONTENT_LAUNCHER_SERVER
#define EMBER_AF_PLUGIN_CONTENT_LAUNCHER

// Use this macro to check if the server side of the Descriptor cluster is included
#define ZCL_USING_DESCRIPTOR_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_DESCRIPTOR_SERVER
#define EMBER_AF_PLUGIN_DESCRIPTOR

// Use this macro to check if the server side of the Diagnostic Logs cluster is included
#define ZCL_USING_DIAGNOSTIC_LOGS_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_DIAGNOSTIC_LOGS_SERVER
#define EMBER_AF_PLUGIN_DIAGNOSTIC_LOGS

// Use this macro to check if the server side of the Door Lock cluster is included
#define ZCL_USING_DOOR_LOCK_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_DOOR_LOCK_SERVER
#define EMBER_AF_PLUGIN_DOOR_LOCK

// Use this macro to check if the server side of the Electrical Measurement cluster is included
#define ZCL_USING_ELECTRICAL_MEASUREMENT_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_ELECTRICAL_MEASUREMENT_SERVER
#define EMBER_AF_PLUGIN_ELECTRICAL_MEASUREMENT

// Use this macro to check if the server side of the Ethernet Network Diagnostics cluster is included
#define ZCL_USING_ETHERNET_NETWORK_DIAGNOSTICS_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_ETHERNET_NETWORK_DIAGNOSTICS_SERVER
#define EMBER_AF_PLUGIN_ETHERNET_NETWORK_DIAGNOSTICS

// Use this macro to check if the server side of the Fixed Label cluster is included
#define ZCL_USING_FIXED_LABEL_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_FIXED_LABEL_SERVER
#define EMBER_AF_PLUGIN_FIXED_LABEL

// Use this macro to check if the server side of the Flow Measurement cluster is included
#define ZCL_USING_FLOW_MEASUREMENT_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_FLOW_MEASUREMENT_SERVER
#define EMBER_AF_PLUGIN_FLOW_MEASUREMENT

// Use this macro to check if the server side of the General Commissioning cluster is included
#define ZCL_USING_GENERAL_COMMISSIONING_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_GENERAL_COMMISSIONING_SERVER
#define EMBER_AF_PLUGIN_GENERAL_COMMISSIONING

// Use this macro to check if the server side of the General Diagnostics cluster is included
#define ZCL_USING_GENERAL_DIAGNOSTICS_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_GENERAL_DIAGNOSTICS_SERVER
#define EMBER_AF_PLUGIN_GENERAL_DIAGNOSTICS

// Use this macro to check if the server side of the Group Key Management cluster is included
#define ZCL_USING_GROUP_KEY_MANAGEMENT_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_GROUP_KEY_MANAGEMENT_SERVER
#define EMBER_AF_PLUGIN_GROUP_KEY_MANAGEMENT

// Use this macro to check if the server side of the Groups cluster is included
#define ZCL_USING_GROUPS_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_GROUPS_SERVER
#define EMBER_AF_PLUGIN_GROUPS

// Use this macro to check if the server side of the IAS Zone cluster is included
#define ZCL_USING_IAS_ZONE_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_IAS_ZONE_SERVER
#define EMBER_AF_PLUGIN_IAS_ZONE
// User options for server plugin IAS Zone
#define EMBER_AF_PLUGIN_IAS_ZONE_SERVER_ZONE_TYPE 541

// Use this macro to check if the server side of the Identify cluster is included
#define ZCL_USING_IDENTIFY_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_IDENTIFY_SERVER
#define EMBER_AF_PLUGIN_IDENTIFY

// Use this macro to check if the server side of the Illuminance Measurement cluster is included
#define ZCL_USING_ILLUMINANCE_MEASUREMENT_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_ILLUMINANCE_MEASUREMENT_SERVER
#define EMBER_AF_PLUGIN_ILLUMINANCE_MEASUREMENT

// Use this macro to check if the server side of the Keypad Input cluster is included
#define ZCL_USING_KEYPAD_INPUT_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_KEYPAD_INPUT_SERVER
#define EMBER_AF_PLUGIN_KEYPAD_INPUT

// Use this macro to check if the server side of the Level Control cluster is included
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_SERVER
#define EMBER_AF_PLUGIN_LEVEL_CONTROL
// User options for server plugin Level Control
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_MAXIMUM_LEVEL 255
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_MINIMUM_LEVEL 0
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_RATE 0

// Use this macro to check if the server side of the Localization Configuration cluster is included
#define ZCL_USING_LOCALIZATION_CONFIGURATION_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_LOCALIZATION_CONFIGURATION_SERVER
#define EMBER_AF_PLUGIN_LOCALIZATION_CONFIGURATION

// Use this macro to check if the server side of the Low Power cluster is included
#define ZCL_USING_LOW_POWER_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_LOW_POWER_SERVER
#define EMBER_AF_PLUGIN_LOW_POWER

// Use this macro to check if the server side of the Media Input cluster is included
#define ZCL_USING_MEDIA_INPUT_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_MEDIA_INPUT_SERVER
#define EMBER_AF_PLUGIN_MEDIA_INPUT

// Use this macro to check if the server side of the Media Playback cluster is included
#define ZCL_USING_MEDIA_PLAYBACK_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_MEDIA_PLAYBACK_SERVER
#define EMBER_AF_PLUGIN_MEDIA_PLAYBACK

// Use this macro to check if the server side of the Mode Select cluster is included
#define ZCL_USING_MODE_SELECT_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_MODE_SELECT_SERVER
#define EMBER_AF_PLUGIN_MODE_SELECT

// Use this macro to check if the server side of the Network Commissioning cluster is included
#define ZCL_USING_NETWORK_COMMISSIONING_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_NETWORK_COMMISSIONING_SERVER
#define EMBER_AF_PLUGIN_NETWORK_COMMISSIONING

// Use this macro to check if the client side of the OTA Software Update Provider cluster is included
#define ZCL_USING_OTA_PROVIDER_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_OTA_SOFTWARE_UPDATE_PROVIDER_CLIENT

// Use this macro to check if the server side of the OTA Software Update Requestor cluster is included
#define ZCL_USING_OTA_REQUESTOR_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_OTA_SOFTWARE_UPDATE_REQUESTOR_SERVER
#define EMBER_AF_PLUGIN_OTA_SOFTWARE_UPDATE_REQUESTOR

// Use this macro to check if the server side of the Occupancy Sensing cluster is included
#define ZCL_USING_OCCUPANCY_SENSING_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_OCCUPANCY_SENSING_SERVER
#define EMBER_AF_PLUGIN_OCCUPANCY_SENSING

// Use this macro to check if the server side of the On/Off cluster is included
#define ZCL_USING_ON_OFF_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_ON_OFF_SERVER
#define EMBER_AF_PLUGIN_ON_OFF

// Use this macro to check if the server side of the On/off Switch Configuration cluster is included
#define ZCL_USING_ON_OFF_SWITCH_CONFIG_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_ON_OFF_SWITCH_CONFIGURATION_SERVER
#define EMBER_AF_PLUGIN_ON_OFF_SWITCH_CONFIGURATION

// Use this macro to check if the server side of the Operational Credentials cluster is included
#define ZCL_USING_OPERATIONAL_CREDENTIALS_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_OPERATIONAL_CREDENTIALS_SERVER
#define EMBER_AF_PLUGIN_OPERATIONAL_CREDENTIALS

// Use this macro to check if the server side of the Power Source cluster is included
#define ZCL_USING_POWER_SOURCE_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_POWER_SOURCE_SERVER
#define EMBER_AF_PLUGIN_POWER_SOURCE

// Use this macro to check if the server side of the Power Source Configuration cluster is included
#define ZCL_USING_POWER_SOURCE_CONFIGURATION_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_POWER_SOURCE_CONFIGURATION_SERVER
#define EMBER_AF_PLUGIN_POWER_SOURCE_CONFIGURATION

// Use this macro to check if the server side of the Pressure Measurement cluster is included
#define ZCL_USING_PRESSURE_MEASUREMENT_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_PRESSURE_MEASUREMENT_SERVER
#define EMBER_AF_PLUGIN_PRESSURE_MEASUREMENT

// Use this macro to check if the server side of the Pump Configuration and Control cluster is included
#define ZCL_USING_PUMP_CONFIG_CONTROL_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_PUMP_CONFIGURATION_AND_CONTROL_SERVER
#define EMBER_AF_PLUGIN_PUMP_CONFIGURATION_AND_CONTROL

// Use this macro to check if the server side of the Relative Humidity Measurement cluster is included
#define ZCL_USING_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_RELATIVE_HUMIDITY_MEASUREMENT_SERVER
#define EMBER_AF_PLUGIN_RELATIVE_HUMIDITY_MEASUREMENT

// Use this macro to check if the server side of the Scenes cluster is included
#define ZCL_USING_SCENES_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_SCENES_SERVER
#define EMBER_AF_PLUGIN_SCENES
// User options for server plugin Scenes
#define EMBER_AF_PLUGIN_SCENES_TABLE_SIZE 3

// Use this macro to check if the server side of the Software Diagnostics cluster is included
#define ZCL_USING_SOFTWARE_DIAGNOSTICS_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_SOFTWARE_DIAGNOSTICS_SERVER
#define EMBER_AF_PLUGIN_SOFTWARE_DIAGNOSTICS

// Use this macro to check if the server side of the Switch cluster is included
#define ZCL_USING_SWITCH_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_SWITCH_SERVER
#define EMBER_AF_PLUGIN_SWITCH

// Use this macro to check if the server side of the Target Navigator cluster is included
#define ZCL_USING_TARGET_NAVIGATOR_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_TARGET_NAVIGATOR_SERVER
#define EMBER_AF_PLUGIN_TARGET_NAVIGATOR

// Use this macro to check if the server side of the Temperature Measurement cluster is included
#define ZCL_USING_TEMP_MEASUREMENT_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_TEMPERATURE_MEASUREMENT_SERVER
#define EMBER_AF_PLUGIN_TEMPERATURE_MEASUREMENT

// Use this macro to check if the server side of the Test Cluster cluster is included
#define ZCL_USING_TEST_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_TEST_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_TEST_CLUSTER

// Use this macro to check if the server side of the Thermostat cluster is included
#define ZCL_USING_THERMOSTAT_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_THERMOSTAT_SERVER
#define EMBER_AF_PLUGIN_THERMOSTAT

// Use this macro to check if the server side of the Thermostat User Interface Configuration cluster is included
#define ZCL_USING_THERMOSTAT_UI_CONFIG_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_THERMOSTAT_USER_INTERFACE_CONFIGURATION_SERVER
#define EMBER_AF_PLUGIN_THERMOSTAT_USER_INTERFACE_CONFIGURATION

// Use this macro to check if the server side of the Thread Network Diagnostics cluster is included
#define ZCL_USING_THREAD_NETWORK_DIAGNOSTICS_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_THREAD_NETWORK_DIAGNOSTICS_SERVER
#define EMBER_AF_PLUGIN_THREAD_NETWORK_DIAGNOSTICS

// Use this macro to check if the server side of the User Label cluster is included
#define ZCL_USING_USER_LABEL_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_USER_LABEL_SERVER
#define EMBER_AF_PLUGIN_USER_LABEL

// Use this macro to check if the server side of the Wake on LAN cluster is included
#define ZCL_USING_WAKE_ON_LAN_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_WAKE_ON_LAN_SERVER
#define EMBER_AF_PLUGIN_WAKE_ON_LAN

// Use this macro to check if the server side of the WiFi Network Diagnostics cluster is included
#define ZCL_USING_WIFI_NETWORK_DIAGNOSTICS_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_WI_FI_NETWORK_DIAGNOSTICS_SERVER
#define EMBER_AF_PLUGIN_WI_FI_NETWORK_DIAGNOSTICS

// Use this macro to check if the server side of the Window Covering cluster is included
#define ZCL_USING_WINDOW_COVERING_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_WINDOW_COVERING_SERVER
#define EMBER_AF_PLUGIN_WINDOW_COVERING
