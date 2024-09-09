#ifndef COUNTING_SORT_H
#define COUNTING_SORT_H

#include "sorting.h"
#include <vector>

class CountingSort : public Sorting {
public:
    void sort(std::vector<int>& array) override;
};

#endif
