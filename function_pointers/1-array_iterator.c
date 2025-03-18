#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Ejecuta una función en cada elemento de un array
 * @array: Array de enteros
 * @size: Tamaño del array
 * @action: Puntero a la función que se aplicará a cada elemento
 *
 * Description: Aplica la función dada a cada elemento del array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
