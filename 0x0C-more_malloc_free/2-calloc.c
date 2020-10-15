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
	return (ptr);
}
