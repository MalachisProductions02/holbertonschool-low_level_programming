#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Almacena memoria usando malloc
 * @b: Parametro
 * Return: Puntero a la memoria
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
