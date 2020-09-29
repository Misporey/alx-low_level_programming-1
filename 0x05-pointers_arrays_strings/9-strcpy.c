#include "holberton.h"
/**
 *_strcpy-copy string src to dest.
 *@dest:destination string.
 *@src:source string.
 *
 *Return:returns pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int k = 0, p = 0;
/*determine the size of src string.*/
	while (*(src + p) != 0)
	{
		p++;
	}
	for (k = 0; k <= p+1; k++)
	{
		*(dest + k) = *(src + k);
	}

	return (dest);
}
