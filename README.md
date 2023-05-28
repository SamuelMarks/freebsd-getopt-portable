getopt_freebsd
==============
[![License](https://img.shields.io/badge/License-BSD_2--Clause-blue.svg)](https://opensource.org/licenses/BSD-2-Clause)
[![C89](https://img.shields.io/badge/C-89-blue)](https://en.wikipedia.org/wiki/C89_(C_version))

`getopt` and `getopt_long` are nice. But MSVC doesn't have them.

Documentation: https://man.freebsd.org/cgi/man.cgi?getopt_long(3)

BSD-2-Clause: This ports their implementation to Windows from FreeBSD's source tree at [freebsd/freebsd-src@`046d8d8`](https://github.com/freebsd/freebsd-src/commit/046d8d89ed1956944b12ec4f0580c30bc202bbfb).

Apache-2.0: On non-Cygwin Windows this uses `getprogname` at [apple/swift-corelibs-libdispatch@`7fb9d5c`](https://github.com/apple/swift-corelibs-libdispatch/commit/7fb9d5ceea562d60fe34ec55b6b165ae5aca38eb)

Support includes:

- **Windows**

  - MSVC 2022* (tested on x86 and x64)
  - MinGW (tested on x86 and x64)
  - Cygwin

*should support all versions down to ~2010 also.

PS: On Linux, BSD, macOS, SunOS and others with `unistd.h` depending on this library should still work; this just becomes a header-only lib with `#include <unistd.h>`.

---

## License

Licensed under BSD 2 clause ([LICENSE-BSD-2](LICENSE-BSD-2) or <https://opensource.org/license/bsd-2-clause>)

Except for getprogname which is Apache-2.0 from https://github.com/apple/swift-corelibs-libdispatch

### Contribution

Unless you explicitly state otherwise, any contribution intentionally submitted
for inclusion in the work by you, shall be licensed as above, without any
additional terms or conditions.
