#include <stdio.h>

/**
 *main-prints first 50 fibbonacci numbers.
 *Return:void.
 */

int main(void)
{
	long long int i, first = 1, second = 2, next;

	printf("%lld", first);
	printf(",");
	printf(" ");
	printf("%lld", second);
	printf(",");
	printf(" ");

	for (i = 0; i < 96; i++)
	{
		next = second + first;
		first = second;
		second = next;
		printf("%lld", next);
		if (i == 95)
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
	return (0);
}
