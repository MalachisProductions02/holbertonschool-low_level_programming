#include "main.h"

/**
 * _strncpy - Copia y pega un string
 * @dest: Destine Death
 * @src: Where's the source bro?
 * @n: Parametro
 * Return: Regresa el valor de _strncpy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
