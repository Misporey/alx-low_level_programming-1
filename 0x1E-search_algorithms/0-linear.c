#include  "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *linear_search - Searches for a value in an array of integers using
 *Linear algorithm.
 *@array:Pointer to the array to be searched.
 *@size:Size of the array-array.
 *@value:Value to search for.
 *Return:The first index where the value is located, if value
 *is not present return -1
 */

int linear_search(int *array, size_t size, int value)
{
	int size_ar = (int) size;
	int i;

	for (i = 0; i < size_ar; i++)
	{
		printf("Value checked array[%d] = %d\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
