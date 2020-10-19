#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog - create an instance of struct dog.
 *@name:firt argument.
 *@age:second argument.
 *@owner: Third argument.
 *Return: instance of struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
	{
		return (NULL);
	}
	(*newdog).name = name;
	(*newdog).age = age;
	(*newdog).owner = owner;

	if (newdog == NULL)
		return (NULL);

	return (newdog);
}
