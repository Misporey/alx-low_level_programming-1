#include "holberton.h"
#include <stdlib.h>
/**
 *array_range-creates an array of integers.
 *@min:minimum integer value.
 *@max:maximum integer value.
 *Return:pointer to created array.
 */
int *array_range(int min, int max)
{
	int size = (max - min) + 1;
	void *ptr;
	if (min > max)
	{
		return (NULL);
	}
/*Allocate memory for the integer array.*/
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	_memset2(ptr, min, max, size);
	return (ptr);
}

/*Function to initialize the array range.*/
/**
 *_memset2-Initializes memory with values between b & c including b & c.
 *@s:Pointer to created array of numbers.
 *@b:minimum value.
 *@c:maximum value.
 *@n:size in memory of created array.
 *
 *Return:pointer to created array.
 */
int *_memset2(int *s, int b, int c, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && b <= c)
	{

		*(s + i) = b;
		b++;
		i += 1;
	}
	return (s);
}
