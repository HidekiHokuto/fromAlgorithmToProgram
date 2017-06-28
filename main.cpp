//
// Created by ShiZheng on 27/06/2017.
//
#include <iostream>
#include "chapter1/utility/compare.hpp"
#include "chapter1/utility/search.hpp"

int main() {
    double a[] = {1, 4, 37, 3, 8, 2, 18, 7};
    double n = 3;
    std::cout << linearSearch(a, 8, &n, doubleGreater);
    return 0;
}
