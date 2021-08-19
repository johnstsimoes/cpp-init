# CPP-Init

This repository contains the bare minimum to start a C++ project with GoogleTest.

1) rename `PROJECT_NAME` in CMakeLists.txt
2) remove GIT metadata `rm -rf .git`
3) replace the stub classes in `src` and `test`

If you don't want unit tests, remove the `test` directory. Otherwise ensure you have GoogleTest installed.

```
brew install googletest
```

## To build and test:
```
cmake -S . -B build/
cmake --build build/
ctest --test-dir build/ --output-on-failure --verbose
```

If you need to run an isolated test case (for example, all `BasicTests`):

```
ctest --test-dir build/ --output-on-failure --verbose --gtest_filter=BasicTests.*
```
