/*
 * Copyright (c) , Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "mbed_mux.h"

namespace mbed
{

ssize_t MuxDataService::write(const void* buffer, size_t size)
{
    return Mux::user_data_tx(_dlci, buffer, size);
}


ssize_t MuxDataService::read(void *buffer, size_t size)
{
    return Mux::user_data_rx(buffer, size);
}


off_t MuxDataService::seek(off_t offset, int whence)
{
    MBED_ASSERT(false);
    return 0;
}


int MuxDataService::close()
{
    MBED_ASSERT(false);
    return 0;
}


void MuxDataService::sigio(Callback<void()> func)
{
    _sigio_cb = func;
}

} // namespace mbed
