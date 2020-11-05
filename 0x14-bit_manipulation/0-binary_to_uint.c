#include "holberton.h"
#include <stdlib.h>
/**
 *binary_to_uint-Converts a binary number to unsigned integer.
 *@b:Pointer to the string of binary digits.
 *Return:Unsigned integer.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j = 0;
	int n = _strlen(b);
	unsigned int myint = 0;

	if (b == NULL || n == 0)
		return (0);
	for (i = (n - 1); i >= 0; i--)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		if (b[j] == '1')
			myint += power(2, (i));
		j++;
	}
	return (myint);
}



/**
 *_strlen-Finds the length of a string.
 *@s:String pointer to the string whose length is to be found.
 *
 *Return: returns the length of the string.
 */

int _strlen(const char *s)
	{
		int p = 0;
/*incremeant up to when the last character is NULL,\0*/
		while (*(s + p) != '\0')
		{
			p++;
		}
		return (p);
	}
/**
 *power-Computes base raised to power exponent.
 *@base:The base number.
 *@exponent:The power to raise to.
 *Return:The base power exponent.
 */
int power(int base, long int exponent)
{
	int j;
	int result = 1;

	for (j = exponent; j > 0; j--)
	{
		result = result * base;
	}
	return (result);
}
