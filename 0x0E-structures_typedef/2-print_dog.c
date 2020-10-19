#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dog-Print values of a struct dog.
 *@d: Pointer to the struct.
 *Return:void.
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nill)\n");
	}

	if (d->age <= 0)
	{
		printf("Age: (nil)\n");
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nill)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
