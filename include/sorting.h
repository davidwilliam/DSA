#ifndef SORTING_H
#define SORTING_H

#include <vector>

namespace dsa {
    class Sorting {
    public:
        virtual ~Sorting() {}

        virtual void sort(std::vector<int>& array) = 0;
    };
}

#endif