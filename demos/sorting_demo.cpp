#include <iostream>
#include <vector>
#include "dsa.h"

using namespace dsa;

void printArray(const std::vector<int>& array, const std::string& message) {
    std::cout << message;
    for (const int& num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

template <typename SortAlgorithm>
void sortAndDisplay(std::vector<int> array, const std::string& algorithmName, SortAlgorithm& sorter) {
    std::cout << "\n== " << algorithmName << " ==" << std::endl;
    printArray(array, "Array before sorting: ");
    sorter.sort(array);
    printArray(array, "Array after sorting with " + algorithmName + ": ");
}

int main() {
    BubbleSort bubbleSort;
    SelectionSort selectionSort;
    InsertionSort insertionSort;
    QuickSort quickSort;
    MergeSort mergeSort;
    ShellSort shellSort;
    CountingSort countingSort;
    RadixSort radixSort;
    HeapSort heapSort;

    std::vector<int> bubble_array = {9, 2, 5, 3, 11, 8, 4};
    std::vector<int> selection_array = {7, 34, 22, 29, 39, 21, 35};
    std::vector<int> insertion_array = {64, 25, 12, 22, 11, 90, 34};
    std::vector<int> quicksort_array = {33, 21, 10, 8, 7, 6, 15};
    std::vector<int> mergesort_array = {38, 27, 43, 3, 9, 82, 10};
    std::vector<int> shellsort_array = {99, 35, 22, 48, 76, 13, 66};
    std::vector<int> countingsort_array = {5, 3, 9, 1, 7, 3, 8};
    std::vector<int> radixsort_array = {170, 45, 75, 90, 802, 24, 2, 66};
    std::vector<int> heapsort_array = {12, 11, 13, 5, 6, 7};

    std::cout << "\nWelcome to the Sorting Algorithms Demo!" << std::endl;

    sortAndDisplay(bubble_array, "Bubble Sort", bubbleSort);
    sortAndDisplay(selection_array, "Selection Sort", selectionSort);
    sortAndDisplay(insertion_array, "Insertion Sort", insertionSort);
    sortAndDisplay(quicksort_array, "Quick Sort", quickSort);
    sortAndDisplay(mergesort_array, "Merge Sort", mergeSort);
    sortAndDisplay(shellsort_array, "Shell Sort", shellSort);
    sortAndDisplay(countingsort_array, "Counting Sort", countingSort);
    sortAndDisplay(radixsort_array, "Radix Sort", radixSort);
    sortAndDisplay(heapsort_array, "Heap Sort", heapSort);

    return 0;
}
