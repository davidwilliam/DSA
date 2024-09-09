#include <gtest/gtest.h>
#include "dsa.h"

TEST(ExampleTest, FunctionWorks) {
    EXPECT_EQ(1, 1); 
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
