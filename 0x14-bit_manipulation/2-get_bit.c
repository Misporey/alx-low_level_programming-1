#include "holberton.h"
#include <stdlib.h>
/**
 *get_bit-Gets the bit at a given index.
 *@n:Integer from which to get the bit.
 *@index:Position of the bit.
 *Return:Bit at position index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *p = decToBinary(n);
	char bit = *(p + index);

	return (bit);
}
/**
 *decToBinary-Converts an integer to binary.
 *@n:Integer to convert.
 *Return:Pointer to an array of binary digits.
 */
char *decToBinary(unsigned long int n)
{
	char bin[64];
	char *binaryNum = bin;
	int i = 0;

	while (n > 0)
	{
		*(binaryNum + i) = n % 2;
		n = n / 2;
		i++;
	}

	return (binaryNum);
}
