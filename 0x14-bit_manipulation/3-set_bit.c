#include "holberton.h"
/**
 *set_bit-Set a bit at a given index to one.
 *@n:Pointer to an int.
 *@index:Bit position to set to zero.
 *Return:1-success, -1-fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;

	if (index > 64)
	{
		return (-1);
	}
	*n = (*n & ~mask) | ((1 << index) & mask);
	return (1);
}
