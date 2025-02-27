#include "main.h"

/**
 * _strcpy - Copia y pega un string
 * @dest: Destino
 * @s: Fuente
 * Return: Destino
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
