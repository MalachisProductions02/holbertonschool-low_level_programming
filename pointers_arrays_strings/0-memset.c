#include "main.h"

/**
 * _memset - Rellena la memoria con un byte constante
 * @s: Puntero
 * @b: Parametro constante
 * @n:n Parametro
 * Return: Resultado de la función
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
