#include "holberton.h"
#include <stdio.h>
/**
 *print_array-prints arrays elements to stdout.
 *@a:array to be printed passed as a pointer.
 *@n:Number of array elements to be printed.
 *Return:void.
 */

void print_array(int *a, int n)
{
	int j = 0, k;

	for (k = 0; k < n; k++)
	{
		printf("%d", *(a + j));
		j++;
		if (k == n - 1)
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
