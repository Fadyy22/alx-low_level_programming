#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 *
 * @d: pointer to a struct dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
