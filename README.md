# C/C++ project template based on Meson.

Uses CppUTest for unit testing. Provides support for coverage reporting (via `lcov`/`gcov` - gcc is assumed), documentation generation (via `doxygen`) and scripts+configuration for code analysis with `clangd`, `cppcheck` and `clang-tidy`.

## Structure

* `apps` - application binaries
* `libs` - application's modules
* `subprojects` - external libraries managed by Meson
* `tests` - unit tests

## Supported tools

* `clangd` - put the configuration in `.clangd` file, by default it assumes that the build directory w/ `compile_commands.json` is `./builddir/`.
* `cppcheck` - TODO
* `clang-tidy` - TODO
* `doxygen` - TODO
* `gcov/lcov` - TODO
