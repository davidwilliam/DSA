#include <gtest/gtest.h>
#include "insertion_sort.h"

using namespace dsa;

TEST(InsertionSortTest, BestCase) {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    InsertionSort sorter;
    sorter.sort(arr);

    std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EXPECT_EQ(arr, expected);
}

TEST(InsertionSortTest, AverageCase) {
    std::vector<int> arr = {8, 3, 5, 7, 2, 1, 10, 9, 6, 4};
    InsertionSort sorter;
    sorter.sort(arr);

    std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EXPECT_EQ(arr, expected);
}

TEST(InsertionSortTest, WorstCase) {
    std::vector<int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    InsertionSort sorter;
    sorter.sort(arr);

    std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EXPECT_EQ(arr, expected);
}
