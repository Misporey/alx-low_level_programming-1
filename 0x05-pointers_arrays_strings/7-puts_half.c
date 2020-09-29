#include "holberton.h"
/**
 *puts_half-prints half a string to stdout in reverse
 *@str:string to be printed in reverse,
 *Return:void.
 */

void puts_half(char *str)
{
	int p, k;

/*First determine the size of the string*/
	while (*(str + p) != 0)
	{
		p++;
	}
	if ((p) % 2 == 0)
	{

		for (k = p / 2; k <= p; k++)
	{
		_putchar(str[k]);
	}
	}
	else
	{
		for (k = (p - 1) / 2; k <= p; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
