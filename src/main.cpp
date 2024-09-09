#include <iostream>
#include <vector>
#include "dsa.h"

// Function to print an array
void printArray(const std::vector<int>& array, const std::string& message) {
    std::cout << message;
    for (const int& num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Function to sort and display the result
template <typename SortAlgorithm>
void sortAndDisplay(std::vector<int> array, const std::string& algorithmName, SortAlgorithm& sorter) {
    std::cout << "== " << algorithmName << " ==" << std::endl;
    printArray(array, "Array before sorting: ");
    sorter.sort(array);
    printArray(array, "Array after sorting with " + algorithmName + ": ");
}

int main() {
    std::vector<int> bubble_array = {9, 2, 5, 3, 11, 8, 4};
    std::vector<int> selection_array = {7, 34, 22, 29, 39, 21, 35};
    std::vector<int> insertion_array = {64, 25, 12, 22, 11, 90, 34};

    BubbleSort bubbleSort;
    SelectionSort selectionSort;
    InsertionSort insertionSort;

    std::cout << "Welcome to the DSA Library!" << std::endl;
    std::cout << "Here are some examples." << std::endl;

    // Sort and display using the respective sorting algorithms
    sortAndDisplay(bubble_array, "Bubble Sort", bubbleSort);
    sortAndDisplay(selection_array, "Selection Sort", selectionSort);
    sortAndDisplay(insertion_array, "Insertion Sort", insertionSort);

    return 0;
}
