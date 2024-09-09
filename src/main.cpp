#include <iostream>
#include <vector>
#include "dsa.h"

int main() {

    std::vector<int> bubble_array = {64, 34, 25, 12, 22, 11, 90};
    std::vector<int> selection_array = {64, 25, 12, 22, 11, 90, 34};

    BubbleSort bubbleSort;
    SelectionSort selectionSort;

    std::cout << "Welcome to the DSA Library!" << std::endl;
    std::cout << "Here are some examples." << std::endl;

    std::cout << "== Bubble Sort ==" << std::endl;
    std::cout << "Array before sorting: ";
    for (int i = 0; i < bubble_array.size(); i++) {
        std::cout << bubble_array[i] << " ";
    }
    std::cout << std::endl;

    bubbleSort.sort(bubble_array);

    std::cout << "Array after sorting with Bubble Sort: ";
    for (int i = 0; i < bubble_array.size(); i++) {
        std::cout << bubble_array[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "== Selection Sort ==" << std::endl;
    std::cout << "Array before Selection Sort: ";
    for (const int& num : selection_array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    selectionSort.sort(selection_array);

    std::cout << "Array after Selection Sort: ";
    for (const int& num : selection_array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}