# exit if any command fails
set -e
cmake --build bin/
for each in ./bin/tests/*_tst ; do $each --gtest_filter=$1; done

