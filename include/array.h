#ifndef ARRAY_H
#define ARRAY_H

#include <vector>
#include <utility>
#include <unordered_map>

namespace dsa {

    class Array {
    public:
        std::pair<int, int> twoSum(const std::vector<int>& nums, int target);
    };

}

#endif
