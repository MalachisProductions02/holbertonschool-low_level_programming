#include "main.h"
#include <stdlib.h>

/**
 * create_array - Crea un array de chars
 * @size: Tamaño
 * @c: Parametro
 * Return: Puntero al array o NULL si falla
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
