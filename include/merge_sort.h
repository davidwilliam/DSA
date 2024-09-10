#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include "sorting.h"
#include <vector>

namespace dsa {
    class MergeSort : public Sorting {
    public:
        void sort(std::vector<int>& array) override;

    private:
        void mergeSort(std::vector<int>& array, int left, int right);
        void merge(std::vector<int>& array, int left, int mid, int right);
    };
}

#endif
