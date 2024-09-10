#include "array.h"

namespace dsa {

    std::pair<int, int> Array::twoSum(const std::vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};
            }

            num_map[nums[i]] = i;
        }

        return {-1, -1};
    }

    std::vector<std::vector<int>> Array::threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;

        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});

                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }

                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--; 
                }
            }
        }

        return result;
    }

}
