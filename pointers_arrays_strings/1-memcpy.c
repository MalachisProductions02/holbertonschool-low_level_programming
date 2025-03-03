#include "main.h"

/**
 * _memcpy - Copia memoria de un lugar a otro
 * @dest: Destino
 * @src: Origen
 * @n: Parametro
 * Return: Resultado de la funcion
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
