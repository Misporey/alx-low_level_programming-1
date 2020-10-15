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
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: memory area to return
 * @b: constant byte
 * @n: size of bytes
 * Return: pointer to memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{

		*(s + i) = b;
		i += 1;
	}
	return (s);
}
