#include "holberton.h"
/**
 *print_square-prints a square of defined size.
 *@size:size of the square.
 *
 *Return:void
 */


void print_square(int size)
{
	int j, k;
	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
