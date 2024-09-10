#ifndef RADIX_SORT_H
#define RADIX_SORT_H

#include "sorting.h"
#include <vector>

namespace dsa {
    class RadixSort : public Sorting {
    public:
        void sort(std::vector<int>& array) override;

    private:
        int getMax(const std::vector<int>& array);
        void countSort(std::vector<int>& array, int exp);
    };
}

#endif
