#include "holberton.h"
/**
 *_strcmp-compares 2 strings.
 *@s1:First argument.
 *@s2:Second argument.
 *
 *Return:an integer.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		/*if characters differ or end of second string is reached*/
		if (*s1 != *s2)
		{
			break;
		}
		/*move to next pair of characters*/
		s1++;
		s2++;
	}

	/* return the ASCII difference after converting char* to unsigned char*/
	return (*(char *)s1 - *(char *)s2);
}
