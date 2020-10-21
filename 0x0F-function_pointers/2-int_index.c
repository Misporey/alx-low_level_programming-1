#include <stdlib.h>
#include "function_pointers.h"
#include <stdbool.h>
/**
 *int_index-Searches for an integer.
 *@array:the array to search from.
 *@size:Size of the array.
 *@cmp:Pointer to the fxn that checks for an int.
 *
 *Return:index of the found index.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;
	bool k;

	if (array != NULL && size > 0 && cmp != NULL)
	{
	if (size <= 0)
	{
		return (0);
	}

	for (j = 0; j < size; j++)
	{
		k = cmp(array[j]);
		if (k == true)
		{
			return (j);
		}
	}
	}
	return (-1);
}
