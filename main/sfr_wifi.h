/* Declarations of command registration functions.

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

void state_sfr_wifi_connect();

void state_sfr_wifi_connecting();

void state_sfr_wifi_connected();

void state_sfr_wifi_auth_fetching();

void state_sfr_wifi_auth_fetched();

void state_sfr_wifi_authenticating();

void state_sfr_wifi_authenticated();

#ifdef __cplusplus
}
#endif
