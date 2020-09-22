#include <stdio.h>
#include "holberton.h"



void print_to_98(int n)
{
	int i;
	if (n<98)
	{
		for (i = n; i <=98; i++)
		{
			printf("%d",i);
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
		for (i = n; i >=98; i--)
		{
			printf("%d",i);
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
		printf("%d",n);
		printf("\n");
	}
}
