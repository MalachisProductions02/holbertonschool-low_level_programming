#include "main.h"
#include <stdlib.h>

/**
 * array_range - CRea un listado de numeros
 * @min: Primer parametro
 * @max: Segundo parametro
 * Return: Puntero al array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
