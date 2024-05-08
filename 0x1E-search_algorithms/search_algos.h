#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive_binary_search(int *arr, int left, int right, int val);
void print_array(int *arr, int start, int end);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int min(int a, int b);
int binary_search(int *array, int low, int high, int value);
int exponential_search(int *array, size_t size, int value);

#endif
