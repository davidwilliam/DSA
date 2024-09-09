#include "quick_sort.h"

void QuickSort::sort(std::vector<int>& array) {
    quickSort(array, 0, array.size() - 1);
}


void QuickSort::quickSort(std::vector<int>& array, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(array, low, high);
        quickSort(array, low, pivotIndex - 1); 
        quickSort(array, pivotIndex + 1, high);
    }
}

int QuickSort::partition(std::vector<int>& array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (array[j] < pivot) {
            i++;
            std::swap(array[i], array[j]);
        }
    }
    std::swap(array[i + 1], array[high]);
    return i + 1;
}
