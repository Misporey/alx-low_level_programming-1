#include "search_algos.h"
#include <stdio.h>
/**
 *binary_search-Searches for a value in a sorted array of integers
 *@array:Pointer to the first element of the array to search in.
 *@size: Size of the array to the array.
 *@value: The actual element to search for in the arrray.
 *Return: -1 if value not found, else index of the found element.
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = (int) size - 1;
	int m;

	print_array(array, l, r);
	while (l <= r)
	{
		m = l + (r - l) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
		{
			print_array(array, m + 1, r);
			l = m + 1;
		}
		else if (array[m] > value)
		{
			print_array(array, l, m - 1);
			r = m - 1;
		}
	}
	return (-1);
}

/**
 *print_array-Prints array elements of a given array.
 *@begin:First index from where the printing should begin.
 *@end: Last index to be printed.
 *@array: Array to print.
 */

void print_array(int *array, int begin, int end)
{
	int i;

	printf("Searching in array: ");
	if (begin == end)
		printf("Searching in array: %d\n", array[begin]);
	else if (begin < end)
	{
		printf("Searching in array: ");
		for (i = begin; i < end; i++)
			printf("%d, ", array[i]);
		printf("%i\n", array[i]);
	}
}
