# exit if any command fails
set -e
cmake -S . -B bin/
cmake --build bin/
ctest --test-dir bin/ --output-on-failure --verbose

