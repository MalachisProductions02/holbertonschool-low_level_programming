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
	char *array; // Puntero a un caracter array
	unsigned int i; // Numeor siempre positivo que marca la posicion del array

	if (size == 0)  // Si el tamaño es 0
	{
		return (NULL); // Regresa NULL marcando que no hay nada
	}

	array = malloc(size * sizeof(char)); // Se usa malloc para pedir bytes para size en char 
	if (array == NULL) // Si array esta vacio
	{
		return (NULL); // Regresa NULL
	}

	for (i = 0; i < size; i++) // Simple ciclo for 
	{
		array[i] = c; // Se iguala la posicion con el caracter en ese mismo
	}

	return (array); // Retorna el resultado
}
