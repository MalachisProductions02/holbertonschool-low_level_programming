#include "main.h"

/**
 * _strncat - Concatena dos cadenas de caracteres
 * @dest: El destino
 * @src: Origen
 * @n: Parametro
 * Return: resultado de _strncat
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}	
