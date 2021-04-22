#include "search_algos.h"
#include <stdio.h>
/**
 *jump_search - Searches for a value in a sorted array of integers.
 *@array:Pointer ot the first element of the array to search.
 *@size:Total number of elements in an array.
 *@value: The value to search for.
 *Return: first index where value is located, else return -1.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t jump;
	size_t step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}

