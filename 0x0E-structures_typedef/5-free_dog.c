#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free a struct of type dog_t
 * @d: instance of dog to free.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}
