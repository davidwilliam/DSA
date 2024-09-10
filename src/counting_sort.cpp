#include "counting_sort.h"
#include <algorithm>

namespace dsa {
    void CountingSort::sort(std::vector<int>& array) {
        if (array.empty()) return;

        int maxElement = *std::max_element(array.begin(), array.end());

        std::vector<int> count(maxElement + 1, 0);

        for (int num : array) {
            count[num]++;
        }

        int index = 0;
        for (int i = 0; i <= maxElement; i++) {
            while (count[i] > 0) {
                array[index++] = i;
                count[i]--;
            }
        }
    }
}