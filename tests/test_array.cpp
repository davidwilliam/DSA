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

TEST(ArrayTest, ThreeSumPositiveCase) {
    dsa::Array array;
    std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
    auto result = array.threeSum(nums);

    std::vector<std::vector<int>> expected = {{-1, -1, 2}, {-1, 0, 1}};
    
    EXPECT_EQ(result.size(), expected.size());
    EXPECT_EQ(result, expected);
}

TEST(ArrayTest, ThreeSumNoSolution) {
    dsa::Array array;
    std::vector<int> nums = {1, 2, 3, 4};
    auto result = array.threeSum(nums);

    EXPECT_TRUE(result.empty());
}
