#include "holberton.h"
/**
 *clear_bit-Set a bit at a given index to zero.
 *@n:Pointer to an int.
 *@index:Bit position to set to zero.
 *Return:1-success, -1-fail.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;

	if (index > 64)
	{
		return (-1);
	}
	*n = (*n & ~mask) | ((0 << index) & mask);
	return (1);
}
