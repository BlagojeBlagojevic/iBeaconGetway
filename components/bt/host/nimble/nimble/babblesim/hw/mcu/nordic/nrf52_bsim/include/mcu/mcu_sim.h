/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#ifndef __MCU_SIM_H__
#define __MCU_SIM_H__

#ifdef __cplusplus
extern "C" {
#endif

extern char *native_flash_file;
extern char *native_uart_log_file;
extern const char *native_uart_dev_strs[];

void mcu_sim_parse_args(int argc, char **argv);

void static inline hal_debug_break(void) {}

#ifdef __cplusplus
}
#endif

#endif /* __MCU_SIM_H__ */
