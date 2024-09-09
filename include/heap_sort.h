#ifndef HEAP_SORT_H
#define HEAP_SORT_H

#include "sorting.h"
#include <vector>

class HeapSort : public Sorting {
public:
    void sort(std::vector<int>& array) override;

private:
    void heapify(std::vector<int>& array, int n, int i);
};

#endif
