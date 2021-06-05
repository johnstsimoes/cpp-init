#include <gtest/gtest.h>

#include "subdir/some_util.h"

TEST(SomeUtilTests, basic_tests)
{
    SomeUtil u;

    EXPECT_EQ (5, u.sum(2,3) );
}
