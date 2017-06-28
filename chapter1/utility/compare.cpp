//
// Created by ShiZheng on 26/06/2017.
//
// Used to compare two same type values

#include "compare.hpp"

int intGreater(int *x, int *y) {
    return (*x) - (*y);
}

int charGreater(char *x, char *y) {
    return (*x) - (*y);
}

int floatGreater(float *x, float *y) {
    if (*x - *y > 0.0)
        return 1;
    if (*x - *y < 0.0)
        return -1;
    return 0;
}

int doubleGreater(double *x, double *y) {
    if (*x - *y > 0.0)
        return 1;
    if (*x - *y < 0.0)
        return -1;
    return 0;
}
