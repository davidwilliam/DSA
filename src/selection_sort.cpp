#include "selection_sort.h"

void SelectionSort::sort(std::vector<int>& array) {
    int n = array.size();
    for (int i = 0; i < n - 1; i++) {

        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }

        std::swap(array[i], array[min_index]);
    }
}