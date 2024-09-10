#include <gtest/gtest.h>
#include "array.h"

TEST(ArrayTest, TwoSumPositiveCase) {
    dsa::Array array;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    auto result = array.twoSum(nums, target);

    EXPECT_EQ(result.first, 0);
    EXPECT_EQ(result.second, 1);
}

TEST(ArrayTest, TwoSumNoSolution) {
    dsa::Array array;
    std::vector<int> nums = {1, 2, 3};
    int target = 10;
    auto result = array.twoSum(nums, target);

    EXPECT_EQ(result.first, -1);
    EXPECT_EQ(result.second, -1);
}
