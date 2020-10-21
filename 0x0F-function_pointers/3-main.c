#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Program entry point.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0-on success.
 */

int main(int argc, char *argv[])
{
	char *operation;
	char operator;
	int a, b, result;

	int (*fxn)(int, int);
/*Check number of arguments*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2][0];
	if ((operator != '*' && operator != '+' && operator != '-'
	     && operator != '/'  && operator != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((operator == '/' || operator == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	operation = argv[2];
	fxn = get_op_func(operation);
	result = (*fxn)(a, b);
	printf("%d\n", result);
	return (0);
}
