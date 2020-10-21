#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name-Prints the name by passing it to the function pointed to by f.
 *@name:Name to be printed.
 *@f:Pointer to a function that will print name.
 *Return:void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
