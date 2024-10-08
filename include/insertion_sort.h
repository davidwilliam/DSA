#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "sorting.h" 
#include <vector>

namespace dsa {
    class InsertionSort : public Sorting {
    public:
        void sort(std::vector<int>& array) override;
    };
}

#endif
