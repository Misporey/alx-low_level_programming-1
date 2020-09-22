#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98- prints numbers from given value to 98.
 *@n:number from which to print to 98.
 *
 *Return: void.
 */


void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			else
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			else
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
}
