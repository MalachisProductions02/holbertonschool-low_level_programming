#include "main.h"
#include <stddef.h>

/**
 * _strchr - Localiza un caracter en un string
 * @s: Puntero
 * @c: Parametro
 * Return: Puntero a la primera ocurrenca de c o s, sino NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
