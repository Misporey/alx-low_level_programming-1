#include  "holberton.h"
#include <stdlib.h>
/**
 *create_array-that creates an array of chars,
 * and initializes it with a specific char.
 *@size:size of the character array.
 *@c:character to initialize the array with.
 *Return:Pointer to the created array.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int j = 0;

	p = malloc(size);
	if (size == 0)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
	p[j] = c;
	}
	return (p);
}
