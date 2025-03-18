#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Ejecuta una funcion usando array
 * @array: Array
 * @size: Tamaño
 * @action: Puntero a la función
 * Description: Aplica la funcion a cada array
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
