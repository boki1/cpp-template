## Cpp project template

[![build-and-tests](https://github.com/boki1/cpp-template/actions/workflows/ci.yml/badge.svg)](https://github.com/boki1/cpp-template/actions/workflows/ci.yml)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

---------------

Template for moderately small modern C++ libraries using CMake and the Conan package manager.

Organised under three directories primarily:
- `build` contains everything related to building the library. More often than not some of these utilities are placed
under the root of the repository, but I do think that for small projects this provides better organization.
- `src/<library>` contains the source code of the library itself, and
- `src/tests` is filled with unit-tests, benchmarks, sample usages, et c.
