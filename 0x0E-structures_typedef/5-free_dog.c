#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory containing struct dog.
 * @d: pointer to struct dog.
 *Return:Null.
 */

void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
