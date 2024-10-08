#include "shell_sort.h"

namespace dsa {
    void ShellSort::sort(std::vector<int>& array) {
        int n = array.size();
        
        for (int gap = n / 2; gap > 0; gap /= 2) {

            for (int i = gap; i < n; i++) {
                int temp = array[i];
                int j;
                
                for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
                    array[j] = array[j - gap];
                }
                
                array[j] = temp;
            }
        }
    }
}