#include "radix_sort.h"
#include <algorithm>

int RadixSort::getMax(const std::vector<int>& array) {
    return *std::max_element(array.begin(), array.end());
}

void RadixSort::countSort(std::vector<int>& array, int exp) {
    int n = array.size();
    std::vector<int> output(n);
    std::vector<int> count(10, 0);

    for (int i = 0; i < n; i++) {
        int digit = (array[i] / exp) % 10;
        count[digit]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        int digit = (array[i] / exp) % 10;
        output[count[digit] - 1] = array[i];
        count[digit]--;
    }

    for (int i = 0; i < n; i++) {
        array[i] = output[i];
    }
}

void RadixSort::sort(std::vector<int>& array) {
    int max = getMax(array);

    for (int exp = 1; max / exp > 0; exp *= 10) {
        countSort(array, exp);
    }
}
