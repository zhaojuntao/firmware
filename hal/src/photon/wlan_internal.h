/**
 ******************************************************************************
 * @file    wlan_internal.h
 * @authors Matthew McGowan
 * @date    19 January 2015
 ******************************************************************************
  Copyright (c) 2015 Particle Industries, Inc.  All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation, either
  version 3 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************
 */

#ifndef WLAN_INTERNAL_H
#define	WLAN_INTERNAL_H

#include "wiced.h"
#include "wlan_hal.h"

#ifdef __cplusplus

wiced_result_t wlan_ap_up(wiced_config_soft_ap_t& creds, const wiced_ip_setting_t* device_init_ip_settings);

extern "C" {
#endif

wiced_result_t wlan_initialize_dct();

wiced_security_t wlan_to_wiced_security(WLanSecurityType sec, WLanSecurityCipher cipher);

WLanSecurityType wlan_to_security_type(wiced_security_t sec);
WLanSecurityCipher wlan_to_cipherer_type(wiced_security_t sec);

extern const wiced_ip_setting_t device_init_ip_settings;


#ifdef __cplusplus
}
#endif



#endif	/* WLAN_INTERNAL_H */

