#include "holberton.h"
/**
 *string_toupper-change all the lowercase letters to uppercase.
 *@s:Pointer to the string to be changed to uppercase.
 *Return: pointer to uppercase string.
 */

char *string_toupper(char *s)
{

	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			s[j] = s[j] - 32;
		}
		++j;
	}
	return (s);
}
