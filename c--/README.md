![C-- logo](/c--/lib/icons/cmm-150.png)
# C-- ![Issues](https://img.shields.io/github/issues/btd2010/cmm-compiler) ![PRs](https://img.shields.io/github/issues-pr/btd2010/cmm-compiler) ![Version](https://img.shields.io/badge/version-0.0.1--beta-blue)
C-- is a compiled, simple, embeddable programming language mostly like C#, C++, and [Carbon](https://github.com/carbon-language/carbon-lang). I work on it in my free time so I can learn the programming languages I need to use faster and better.

## Installation
You can build and install C-- over a Makefile:
```bash
# Make sure you have Git installed
git clone https://github.com/btd2010/c--
cd c--/c--
make all

#  Other make targets:
#     make compiler - The compiler's headers. You can import the compiler into C/++ using <c--.h>
#     make binary   - Command line binaries. Includes the c-- bin.
#     make tests    - Run tests
#     make all      - Everything
#
# make install  - Installs binaries to /usr/local/bin/, headers to /usr/include/c--/.
```

## Code Sample
> Note: This sample is subject to change.
```kt
// This is a work in progress, hello world is not the only potential this language has (i hope)
#include std

fun int main() {
  std.print("hello world");

  if (1 > 2) {
    std.print("Something is wrong with this language");
  } else {
    std.print("hooray");
  }
}
```

## Embedability
C-- is controlled by the ``c--.h`` header file. After installing C--, you can find it in:
```bash
/usr/include/c--/c--.h
```

To import the header, use C or C++. C-- is written in C so it is compatable with both languages.

```c
#include <c--/c--.h>
```

## License
C-- is licensed under GNU General Public License V3.