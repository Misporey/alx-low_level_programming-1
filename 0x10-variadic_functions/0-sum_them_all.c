#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all-variadic function  that finds the sum of ints.
 *@n:Total number of arguments passed.
 *
 *Return:Sum of arguments passed as integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
