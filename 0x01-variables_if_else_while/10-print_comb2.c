#include <stdio.h>
/**
 *main-Program entry point.
 *Return:0-success, Non-zero, fail.
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i == '9' && j == '9')
			{
				putchar(i);
				putchar(j);
			}
			else
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
