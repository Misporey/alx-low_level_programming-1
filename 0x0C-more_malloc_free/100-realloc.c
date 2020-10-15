#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc-Reallocates a block of memory.
 *@ptr:pointer to the memory previously allocated
 *@old_size:size of the old memory block.
 *@new_size:New size of the block of memory.
 *
 *Return:Pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (newptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		_memcpy(newptr, ptr, old_size);
	free(ptr);
	return (newptr);
}

/**
 * _memcpy - copies memory area.
 * @dest: dest pointer
 * @src: source pointer
 * @n: size of bytes
 * Return: pointer to memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i += 1;
		j += 1;
	}
	return (dest);
}
