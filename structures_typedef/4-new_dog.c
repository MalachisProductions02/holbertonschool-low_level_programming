#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - Regresa un puntero a la dir de memory
 * @str: String a duplicar
 * Return: Puntero al string duplicado
 */
static char *_strdup(char *str)
{
	char *dup;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';

	return (dup);
}

/**
 * new_dog - Crea un nuevo perro
 * @name: Nombre a copiar
 * @age: Año a copiar
 * @owner: Dueño a copiar
 * Return: Puntero a new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
	{
		free(new_d);
		return (NULL);
	}

	new_d->owner = _strdup(owner);
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL)
	}

	new_d->age = age;

	return (new_d);
}
