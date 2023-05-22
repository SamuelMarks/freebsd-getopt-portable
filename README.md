getopt_freebsd_win
==================
[![License](https://img.shields.io/badge/License-BSD_2--Clause-blue.svg)](https://opensource.org/licenses/BSD-2-Clause)
[![C89](https://img.shields.io/badge/C-89-blue)](https://en.wikipedia.org/wiki/C89_(C_version))

`getopt` and `getopt_long` are nice. But MSVC doesn't have them.

This adds them to all targets, tested on:

- **Windows**

  - MSVC 2022* (tested on x86 and x64)
  - MinGW (tested on x86 and x64)
  - Cygwin

*should support all versions down to ~2010 also

---

## License

Licensed under BSD 2 clause ([LICENSE-BSD-2](LICENSE-BSD-2) or <https://opensource.org/license/bsd-2-clause>)

Except for getprogname which is Apache-2.0 from https://github.com/apple/swift-corelibs-libdispatch

### Contribution

Unless you explicitly state otherwise, any contribution intentionally submitted
for inclusion in the work by you, shall be licensed as above, without any
additional terms or conditions.
