//
// Created by ShiZheng on 25/06/2017.
//
// To find the position or the first position of a given value in a given
// array, if does not exsit, return -1

#include "search.hpp"

int linearSearch(int *arr, int len, int *x, int(*comp)(int *, int *)) {
    int i = 0;
    while (i < len) {
        if (comp(arr + i, x) == 0)
            return i;
        ++i;
    }
    return -1;
}

int linearSearch(char *arr, int len, char *x, int (*comp)(char *, char *)) {
    int i = 0;
    while (i < len) {
        if (comp(arr + i, x) == 0)
            return i;
        ++i;
    }
    return -1;
}

int linearSearch(float *arr, int len, float *x, int (*comp)(float *, float *)) {
    int i = 0;
    while (i < len) {
        if (comp(arr + i, x) == 0)
            return i;
        ++i;
    }
    return -1;
}

int linearSearch(double *arr, int len, double *x, int (*comp)(double *, double *)) {
    int i = 0;
    while (i < len) {
        if (comp(arr + i, x) == 0)
            return i;
        ++i;
    }
    return -1;
}
