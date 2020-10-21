#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator-calls functions given as parameters on an array.
 *@array:The array to call functions on.
 *@size:The size of the array.
 *@action:Pointer to the function to call.
 *Return:void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array != NULL && size > 0 && action != NULL)
	{

		for  (j = 0; j < size; j++)
		{
			action(array[j]);
		}
	}
}
