#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <math.h>
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int begin, int end);
int jump_search(int *array, size_t size, int value);

#endif
