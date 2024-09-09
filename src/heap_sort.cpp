#include "heap_sort.h"

void HeapSort::heapify(std::vector<int>& array, int n, int i) {
    int largest = i; 
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && array[left] > array[largest])
        largest = left;

    if (right < n && array[right] > array[largest])
        largest = right;

    if (largest != i) {
        std::swap(array[i], array[largest]);

        heapify(array, n, largest);
    }
}

void HeapSort::sort(std::vector<int>& array) {
    int n = array.size();

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(array, n, i);
    }

    for (int i = n - 1; i >= 0; i--) {
        std::swap(array[0], array[i]);

        heapify(array, i, 0);
    }
}
