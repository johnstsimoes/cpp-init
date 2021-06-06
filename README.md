This repository contains the bare minimum to start a C++ project with GoogleTest.

1) rename `PROJECT_NAME` in CMakeLists.txt
2) remove GIT metadata `rm -rf .git`
3) replace the stub classes in `src` and `test`

To build and run:
```
./build_and_test
```

If you need to run an isolated test case (for example, all `BasicTests`):

```
./runtest_only.sh BasicTests.*
```
