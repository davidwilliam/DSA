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

void printArrayOfArrays(const std::vector<std::vector<int>>& array, const std::string& message) {
    std::cout << message;
    for (const auto& subArray : array) {
        std::cout << "[";
        for (size_t i = 0; i < subArray.size(); ++i) {
            std::cout << subArray[i];
            if (i < subArray.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "] ";
    }
    std::cout << std::endl;
}

void demoTwoSum(dsa::Array& arrayAlgorithms, const std::vector<int>& array, int target) {
    std::cout << "\n== Two Sum ==" << std::endl;
    printArray(array, "Array: ");
    std::cout << "Target: " << target << std::endl;

    auto result = arrayAlgorithms.twoSum(array, target);
    if (result.first != -1 && result.second != -1) {
        std::cout << "Two numbers at indices " << result.first << " and " << result.second
                  << " sum to " << target << std::endl;
    } else {
        std::cout << "No two numbers found that sum to " << target << std::endl;
    }
}

void demoThreeSum(dsa::Array& arrayAlgorithms, std::vector<int> array) {
    std::cout << "\n== Three Sum ==" << std::endl;
    auto result = arrayAlgorithms.threeSum(array);
    if (!result.empty()) {
        printArrayOfArrays(result, "Triplets that sum to 0: ");
    } else {
        std::cout << "No triplets found." << std::endl;
    }
}

void demoFourSum(dsa::Array& arrayAlgorithms, std::vector<int> array, int target) {
    std::cout << "\n== Four Sum ==" << std::endl;
    auto result = arrayAlgorithms.fourSum(array, target);
    if (!result.empty()) {
        printArrayOfArrays(result, "Quadruplets that sum to " + std::to_string(target) + ": ");
    } else {
        std::cout << "No quadruplets found." << std::endl;
    }
}

void demoRemoveDuplicates(dsa::Array& arrayObj, std::vector<int>& nums) {
    std::cout << "\n== Remove Duplicates ==" << std::endl;
    printArray(nums, "Original array: ");
    int newLength = arrayObj.removeDuplicates(nums);
    std::vector<int> uniqueNums(nums.begin(), nums.begin() + newLength);
    printArray(uniqueNums, "Array after removing duplicates: ");
    std::cout << "New length of the array after removing duplicates: " << newLength << std::endl;
}

int main() {
    dsa::Array arrayAlgorithms;
    std::vector<int> two_sum_array = {2, 7, 11, 15};
    int two_sum_target = 22;
    std::vector<int> three_sum_array = {-1, 0, 1, 2, -1, -4};
    std::vector<int> four_sum_array = {1, 0, -1, 0, -2, 2};
    int four_sum_target = 0;
    std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    std::cout << "\nWelcome to the Array Algorithms Demo!" << std::endl;

    demoTwoSum(arrayAlgorithms, two_sum_array, two_sum_target);
    demoThreeSum(arrayAlgorithms, three_sum_array);
    demoFourSum(arrayAlgorithms, four_sum_array, four_sum_target);
    demoRemoveDuplicates(arrayAlgorithms, nums);

    return 0;
}
