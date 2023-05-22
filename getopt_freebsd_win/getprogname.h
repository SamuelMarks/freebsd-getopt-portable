/*
 * Copyright (c) 2009-2010 Mark Heily <mark@heily.com>
 * All rights reserved.
 *
 * @APPLE_APACHE_LICENSE_HEADER_START@
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
 *
 * @APPLE_APACHE_LICENSE_HEADER_END@
 */

#include <errno.h>
#include "getopt_freebsd_win_export.h"

#ifndef __DISPATCH_SHIMS_GETPROGNAME__
#define __DISPATCH_SHIMS_GETPROGNAME__

#if !HAVE_GETPROGNAME

#ifdef __ANDROID__
extern const char *__progname;
#endif /* __ANDROID */

#if defined(_MSC_VER) || defined(__MINGW32__) || defined(__MSYS__)
GETOPT_FREEBSD_WIN_EXPORT
const char *_getprogname(void);
#else

static inline char *
getprogname(void)
{
# if HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME
	return program_invocation_short_name;
# elif defined(__ANDROID__)
	return __progname;
# else
#   error getprogname(3) is not available on this platform
# endif
}
#endif /* defined(_MSC_VER) || defined(__MINGW32__) || defined(__MSYS__) */
#endif /* HAVE_GETPROGNAME */

#endif /* __DISPATCH_SHIMS_GETPROGNAME__ */
