#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc-allocate memory to an array using malloc.
 *@nmemb:Total array members.
 *@size:size of each array member.
 *
 *Return:Pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
/*pointer-points to memory.*/
	unsigned int j;
	int *ptr;

	if ((nmemb || size) == 0)
	{
		return (NULL);
	}
/*Reserve memory*/
	ptr = malloc(nmemb * size);
/*check if malloc failed.*/
	if (ptr == NULL)
	{
		return (NULL);
	}
/*initialize memory to zero*/
	for (j = 0; j < (nmemb * size); j++)
	{
		ptr[j] = 0;
	}
	return (ptr);
}
