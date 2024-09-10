#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include "sorting.h"
#include <vector>

namespace dsa {
    class BubbleSort : public Sorting {
    public:
        void sort(std::vector<int>& array) override;
    };
}

#endif