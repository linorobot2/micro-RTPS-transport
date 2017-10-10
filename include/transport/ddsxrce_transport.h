// Copyright 2017 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _DDSXRCE_TRANSPORT_H_
#define _DDSXRCE_TRANSPORT_H_

#include "ddsxrce_transport_common.h"

#ifdef __cplusplus
extern "C"
{
#endif

locator_id_t add_serial_locator(const char* device);
locator_id_t add_udp_locator(const uint16_t udp_port_recv, const uint16_t udp_port_send);

int rm_locator(const locator_id_t locator_id);

int send_data(const octet* in_buffer, const size_t buffer_len, const locator_id_t locator_id);
int receive_data(octet* out_buffer, const size_t buffer_len, const locator_id_t locator_id);

#ifdef __cplusplus
}
#endif

#endif
