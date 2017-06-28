//
// Created by ShiZheng on 25/06/2017.
//

#include "search.hpp"

/*
int linearSearch(void *a, int size, int n, void *x, int (*comp)(int *, int *)) {
    int i = 0;
    while (i < n) {
        if (comp ((char *)a + i * size, x) == 0)
            return i;
        ++i;
    }
    return -1;
}
*/

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