#ifndef SHELL_SORT_H
#define SHELL_SORT_H

#include "sorting.h"
#include <vector>

class ShellSort : public Sorting {
public:
    void sort(std::vector<int>& array) override;
};

#endif
