#include <gtest/gtest.h>
#include "counting_sort.h"

TEST(CountingSortTest, BestCase) {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    CountingSort sorter;
    sorter.sort(arr);

    std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EXPECT_EQ(arr, expected);
}

TEST(CountingSortTest, AverageCase) {
    std::vector<int> arr = {8, 3, 5, 7, 2, 1, 10, 9, 6, 4};
    CountingSort sorter;
    sorter.sort(arr);

    std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EXPECT_EQ(arr, expected);
}

TEST(CountingSortTest, DuplicateValues) {
    std::vector<int> arr = {5, 3, 9, 1, 7, 3, 8};
    CountingSort sorter;
    sorter.sort(arr);

    std::vector<int> expected = {1, 3, 3, 5, 7, 8, 9};
    EXPECT_EQ(arr, expected);
}
