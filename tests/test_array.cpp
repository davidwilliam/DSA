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

TEST(ArrayTest, FourSumPositiveCase) {
    dsa::Array array;
    std::vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    auto result = array.fourSum(nums, target);

    std::vector<std::vector<int>> expected = {{-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}};
    
    EXPECT_EQ(result.size(), expected.size());
    EXPECT_EQ(result, expected);
}

TEST(ArrayTest, FourSumNoSolution) {
    dsa::Array array;
    std::vector<int> nums = {1, 2, 5, 6};
    int target = 50;
    auto result = array.fourSum(nums, target);

    EXPECT_TRUE(result.empty());
}

TEST(ArrayTest, RemoveDuplicatesBestCase) {
    dsa::Array array;
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int result = array.removeDuplicates(nums);
    
    EXPECT_EQ(result, 5); 
    std::vector<int> expected = {1, 2, 3, 4, 5};
    for (int i = 0; i < result; ++i) {
        EXPECT_EQ(nums[i], expected[i]);
    }
}

TEST(ArrayTest, RemoveDuplicatesAverageCase) {
    dsa::Array array;
    std::vector<int> nums = {1, 1, 2, 3, 3, 4};
    int result = array.removeDuplicates(nums);
    
    EXPECT_EQ(result, 4); 
    std::vector<int> expected = {1, 2, 3, 4};
    for (int i = 0; i < result; ++i) {
        EXPECT_EQ(nums[i], expected[i]);
    }
}

TEST(ArrayTest, RemoveDuplicatesWorstCase) {
    dsa::Array array;
    std::vector<int> nums = {1, 1, 1, 1, 1};
    int result = array.removeDuplicates(nums);
    
    EXPECT_EQ(result, 1); 
    std::vector<int> expected = {1};
    for (int i = 0; i < result; ++i) {
        EXPECT_EQ(nums[i], expected[i]);
    }
}
