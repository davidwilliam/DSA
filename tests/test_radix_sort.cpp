#include <gtest/gtest.h>
#include "radix_sort.h"

TEST(RadixSortTest, BestCase) {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    RadixSort sorter;
    sorter.sort(arr);

    std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EXPECT_EQ(arr, expected);
}

TEST(RadixSortTest, AverageCase) {
    std::vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    RadixSort sorter;
    sorter.sort(arr);

    std::vector<int> expected = {2, 24, 45, 66, 75, 90, 170, 802};
    EXPECT_EQ(arr, expected);
}

TEST(RadixSortTest, DuplicateValues) {
    std::vector<int> arr = {5, 3, 9, 1, 7, 3, 8};
    RadixSort sorter;
    sorter.sort(arr);

    std::vector<int> expected = {1, 3, 3, 5, 7, 8, 9};
    EXPECT_EQ(arr, expected);
}
