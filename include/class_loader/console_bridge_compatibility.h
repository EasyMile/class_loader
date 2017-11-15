/*
 * Copyright (c) 2017, Open Source Robotics Foundation, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Willow Garage, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef CLASS_LOADER__CONSOLE_BRIDGE_COMPATIBILITY_H_
#define CLASS_LOADER__CONSOLE_BRIDGE_COMPATIBILITY_H_

#include <console_bridge/console.h>

#ifdef logDebug
# ifdef CONSOLE_BRIDGE_logDebug
#  undef logDebug
# else
// Remove this when no longer supporting platforms with libconsole-bridge-dev < 0.3.0,
#  define CONSOLE_BRIDGE_logDebug logDebug
# endif
#endif
#ifdef logInform
# ifdef CONSOLE_BRIDGE_logInform
#  undef logInform
# else
// Remove this when no longer supporting platforms with libconsole-bridge-dev < 0.3.0,
#  define CONSOLE_BRIDGE_logInform logInform
# endif
#endif
#ifdef logWarn
# ifdef CONSOLE_BRIDGE_logWarn
#  undef logWarn
# else
// Remove this when no longer supporting platforms with libconsole-bridge-dev < 0.3.0,
#  define CONSOLE_BRIDGE_logWarn logWarn
# endif
#endif
#ifdef logError
# ifdef CONSOLE_BRIDGE_logError
#  undef logError
# else
// Remove this when no longer supporting platforms with libconsole-bridge-dev < 0.3.0,
#  define CONSOLE_BRIDGE_logError logError
# endif
#endif

#endif  // CLASS_LOADER__CONSOLE_BRIDGE_COMPATIBILITY_H_
