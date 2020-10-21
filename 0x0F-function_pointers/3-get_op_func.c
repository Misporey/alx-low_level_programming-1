#include "3-calc.h"
#include <stdlib.h>
/**
 *get_op_func-selects correct operation to perform
 *and returns the function to perform the operation.
 *@s:Operation.
 *@s:First operand.
 *
 *Return:Returns pointer to the function that performs the
 *respective operation.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == *(ops[i]).op)
		{
			return (*(ops[i]).f);
		}
		i++;
	}
	return (NULL);
}
