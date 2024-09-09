#include <iostream>
#include <vector>
#include "dsa.h"

int main() {
    std::cout << "Welcome to the DSA Library!" << std::endl;
    std::cout << "Here are some examples." << std::endl;


    std::cout << "== Bubble Sort ==" << std::endl;
    std::vector<int> array = {64, 34, 25, 12, 22, 11, 90};
    
    BubbleSort bubbleSort;

    std::cout << "Array before sorting: ";
    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    bubbleSort.sort(array);

    std::cout << "Array after sorting with Bubble Sort: ";
    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
    return 0;
}