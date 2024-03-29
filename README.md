## Cpp project template

[![build-and-tests](https://github.com/boki1/cpp-template/actions/workflows/build-and-test.yml/badge.svg)](https://github.com/boki1/cpp-template/actions/workflows/build-and-test.yml)
[![format-check](https://github.com/boki1/cpp-template/actions/workflows/clang-format-check.yml/badge.svg)](https://github.com/boki1/cpp-template/actions/workflows/clang-format-check.yml)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

---------------

Template for moderately small modern C++ libraries using CMake and the Conan package manager.

**Building**

```
$ ./build.sh
```

_NB_

Currently the template requires that the version of `conan` is **not** `conan2`, so you may have to run something along the lines of
```
$ pip install --force-reinstall -v "conan==1.47.0"
```
Also make sure that python3 commands are ran inside a virtual environment.

**Documentation** - [_Latest_](https://boki1.github.io/cpp-template/)

The documentation is automatically deployed in the Pages of this repository. Note that you may
have to manually change the settings of "Pages" to use the "gh-pages" branch. After that the produced
output may be checked out at "https://<username>.github.io/<project>".

**Customization**

For quick change of all mentions of "cpp-template" you may use the following commands:
```
$ grep -rl cpp-template . | xargs sed -i 's/cpp-template/new-project/g'
$ grep -rl cpp_template . | xargs sed -i 's/cpp_template/new_project/g'
$ grep -rl CPP_TEMPLATE . | xargs sed -i 's/CPP_TEMPLATE/NEW_PROJECT/g'
```
