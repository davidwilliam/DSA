#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include "sorting.h"
#include <vector>

namespace dsa {
    class SelectionSort : public Sorting {
    public:
        void sort(std::vector<int>& array) override;
    };
}

#endif
