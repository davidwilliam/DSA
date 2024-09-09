#include <iostream>
#include <vector>
#include "dsa.h"

void printArray(const std::vector<int>& array, const std::string& message) {
    std::cout << message;
    for (const int& num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

template <typename SortAlgorithm>
void sortAndDisplay(std::vector<int> array, const std::string& algorithmName, SortAlgorithm& sorter) {
    std::cout << std::endl; 
    std::cout << "== " << algorithmName << " ==" << std::endl;
    printArray(array, "Array before sorting: ");
    sorter.sort(array);
    printArray(array, "Array after sorting with " + algorithmName + ": ");
}

int main() {
    std::vector<int> bubble_array = {9, 2, 5, 3, 11, 8, 4};
    std::vector<int> selection_array = {7, 34, 22, 29, 39, 21, 35};
    std::vector<int> insertion_array = {64, 25, 12, 22, 11, 90, 34};
    std::vector<int> quicksort_array = {33, 21, 10, 8, 7, 6, 15};
    std::vector<int> mergesort_array = {38, 27, 43, 3, 9, 82, 10};
    std::vector<int> shellsort_array = {99, 35, 22, 48, 76, 13, 66};
    std::vector<int> countingsort_array = {5, 3, 9, 1, 7, 3, 8};

    BubbleSort bubbleSort;
    SelectionSort selectionSort;
    InsertionSort insertionSort;
    QuickSort quickSort;
    MergeSort mergeSort;
    ShellSort shellSort;
    CountingSort countingSort;

    std::cout << std::endl; 
    std::cout << "Welcome to the DSA Library!" << std::endl;
    std::cout << "Here are some examples." << std::endl;

    sortAndDisplay(bubble_array, "Bubble Sort", bubbleSort);
    sortAndDisplay(selection_array, "Selection Sort", selectionSort);
    sortAndDisplay(insertion_array, "Insertion Sort", insertionSort);
    sortAndDisplay(quicksort_array, "Quick Sort", quickSort);
    sortAndDisplay(mergesort_array, "Merge Sort", mergeSort);
    sortAndDisplay(shellsort_array, "Shell Sort", shellSort);
    sortAndDisplay(countingsort_array, "Counting Sort", countingSort);

    std::cout << std::endl; 

    return 0;
}
