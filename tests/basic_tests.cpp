#include <gtest/gtest.h>

#include "basic.h"

TEST(BasicTests, basic_tests)
{
    Basic b;

    EXPECT_EQ (b.something(), "Hello");
}
