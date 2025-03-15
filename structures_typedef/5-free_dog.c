#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Libera memoria de dog_t
 * @d: dog_t a liberar
 * Return: Always 0
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
