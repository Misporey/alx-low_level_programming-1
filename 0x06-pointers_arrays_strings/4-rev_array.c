#include "holberton.h"
/**
 *reverse_array-reverse array elements.
 *@a:pointer to array to be reversed.
 *@n:Array size of array.
 *
 *Return:void.
 */
void reverse_array(int *a, int n)
{
	int tmp, m;

	for (m = n - 1; m >= n / 2; m--)
	{
		tmp = a[n - 1 - m];
		a[n - 1 - m] = a[m];
		a[m] = tmp;
	}
}
