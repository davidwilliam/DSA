#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include "sorting.h"
#include <vector>

namespace dsa {
    class QuickSort : public Sorting {
    public:
        void sort(std::vector<int>& array) override;

    private:
        void quickSort(std::vector<int>& array, int low, int high);
        int partition(std::vector<int>& array, int low, int high);
    };
}

#endif
