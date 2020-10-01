#include "holberton.h"
/**
 *_strcat-concatenates a string.
 *@dest:destination string.
 *@src:source string.
 *
 *Return:Pointer to the cancated string.
 */

char *_strcat(char *dest, char *src)
{
	char i, j = 0, m = 0, k, size, n, r = 0;
/*get the size of the dest string*/
	while (i != '\0')
	{
		i = *(dest + j);
		j++;
	}
/*get size of the src string.*/
	while (k != '\0')
	{
		k = *(src + m);
		m++;
	}
	size = j + m;

	for (n = 0; n < size; n++)
	{
		if (n <= j)
		{
			/**(dest + n) = *(dest + n);*/
		}
		else
		{
			*(dest + n) = *(src + r);
			r++;
		}
	}
	*(dest + n) = '\0';
	return (dest);

}
