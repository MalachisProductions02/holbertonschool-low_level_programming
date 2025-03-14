#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Inicia struct dog
 * @d: Puntero a struct dog
 * @name: Nombre del perro
 * @age: Año del perro
 * @owner: Dueño del perro
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
