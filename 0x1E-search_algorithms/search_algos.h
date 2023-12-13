#ifndef SEARCH_ALGO
#define SEARCH_ALGO

#include <stdio.h>

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);

int search(int *arr, int left, int right, int value);

void print_array(int *arr, int left, int right);


#endif
