#include <gtest/gtest.h>
#include "heap_sort.h"

TEST(HeapSortTest, BestCase) {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    HeapSort sorter;
    sorter.sort(arr);

    std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EXPECT_EQ(arr, expected);
}

TEST(HeapSortTest, AverageCase) {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};
    HeapSort sorter;
    sorter.sort(arr);

    std::vector<int> expected = {5, 6, 7, 11, 12, 13};
    EXPECT_EQ(arr, expected);
}

TEST(HeapSortTest, WorstCase) {
    std::vector<int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    HeapSort sorter;
    sorter.sort(arr);

    std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EXPECT_EQ(arr, expected);
}
