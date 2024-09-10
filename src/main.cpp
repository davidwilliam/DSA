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
    std::cout << std::endl; 
    std::cout << "== " << algorithmName << " ==" << std::endl;
    printArray(array, "Array before sorting: ");
    sorter.sort(array);
    printArray(array, "Array after sorting with " + algorithmName + ": ");
}

void printArrayOfArrays(const std::vector<std::vector<int>>& array, const std::string& message) {
    std::cout << message;
    for (const auto& triplet : array) {
        std::cout << "[";
        for (size_t i = 0; i < triplet.size(); i++) {
            std::cout << triplet[i];
            if (i < triplet.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "] ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> bubble_array = {9, 2, 5, 3, 11, 8, 4};
    std::vector<int> selection_array = {7, 34, 22, 29, 39, 21, 35};
    std::vector<int> insertion_array = {64, 25, 12, 22, 11, 90, 34};
    std::vector<int> quicksort_array = {33, 21, 10, 8, 7, 6, 15};
    std::vector<int> mergesort_array = {38, 27, 43, 3, 9, 82, 10};
    std::vector<int> shellsort_array = {99, 35, 22, 48, 76, 13, 66};
    std::vector<int> countingsort_array = {5, 3, 9, 1, 7, 3, 8};
    std::vector<int> radixsort_array = {170, 45, 75, 90, 802, 24, 2, 66};
    std::vector<int> heapsort_array = {12, 11, 13, 5, 6, 7};

    std::vector<int> two_sum_array = {2, 7, 11, 15};
    int two_sum_target = 22;

    std::vector<int> three_sum_array = {-1, 0, 1, 2, -1, -4};

    std::vector<int> four_sum_array = {1, 0, -1, 0, -2, 2};
    int four_sum_target = 0;

    BubbleSort bubbleSort;
    SelectionSort selectionSort;
    InsertionSort insertionSort;
    QuickSort quickSort;
    MergeSort mergeSort;
    ShellSort shellSort;
    CountingSort countingSort;
    RadixSort radixSort;
    HeapSort heapSort;

    dsa::Array arrayAlgorithms;

    dsa::String stringObj;
    std::string testString1 = "A man, a plan, a canal: Panama";
    std::string testString2 = "Not a palindrome";

    std::string s1 = "egg";
    std::string s2 = "add";
    std::string s3 = "foo";
    std::string s4 = "bar";

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
    sortAndDisplay(radixsort_array, "Radix Sort", radixSort);
    sortAndDisplay(heapsort_array, "Heap Sort", heapSort);

    std::cout << std::endl; 

    std::cout << "== Two Sum ==" << std::endl;
    std::cout << "Array: ";
    for (const int& num : two_sum_array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Target: " << two_sum_target << std::endl;

    auto result = arrayAlgorithms.twoSum(two_sum_array, two_sum_target);
    if (result.first != -1 && result.second != -1) {
        std::cout << "Two numbers at indices " << result.first << " and " << result.second
                  << " sum to " << two_sum_target << std::endl;
    } else {
        std::cout << "No two numbers found that sum to " << two_sum_target << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\n== Three Sum ==" << std::endl;
    auto three_sum_result = arrayAlgorithms.threeSum(three_sum_array);
    if (!three_sum_result.empty()) {
        printArrayOfArrays(three_sum_result, "Triplets that sum to 0: ");
    } else {
        std::cout << "No triplets found." << std::endl;
    }

    std::cout << "\n== Four Sum ==" << std::endl;
    auto four_sum_result = arrayAlgorithms.fourSum(four_sum_array, four_sum_target);
    if (!four_sum_result.empty()) {
        printArrayOfArrays(four_sum_result, "Quadruplets that sum to 0: ");
    } else {
        std::cout << "No quadruplets found." << std::endl;
    }

    std::cout << "\n== Is a palindrome? ==" << std::endl;
    std::cout << "Testing string: \"" << testString1 << "\"" << std::endl;
    std::cout << "Is palindrome? " << (stringObj.isPalindrome(testString1) ? "Yes" : "No") << std::endl;

    std::cout << "Testing string: \"" << testString2 << "\"" << std::endl;
    std::cout << "Is palindrome? " << (stringObj.isPalindrome(testString2) ? "Yes" : "No") << std::endl;

     std::cout << "\n== Isomorphic? ==" << std::endl;
    std::cout << "Testing if \"" << s1 << "\" and \"" << s2 << "\" are isomorphic: "
              << (stringObj.isIsomorphic(s1, s2) ? "Yes" : "No") << std::endl;

    std::cout << "Testing if \"" << s3 << "\" and \"" << s4 << "\" are isomorphic: "
              << (stringObj.isIsomorphic(s3, s4) ? "Yes" : "No") << std::endl;


    return 0;
}
