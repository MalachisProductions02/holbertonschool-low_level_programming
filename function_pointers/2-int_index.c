#include "function_pointers.h"

/**
 * int_index - Busca un entero en un array
 * @array: Array
 * @size: Tamaño
 * @cmp: Puntero a comparacion
 * Return: Indice del primer elemento que coincida
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
