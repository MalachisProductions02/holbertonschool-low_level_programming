#include "main.h"

/**
 * print_rev - Imprime un string al reves
 * @s: Parametro
 */
void print_rev(char *s)
{
	int len = 0, index = 0;
	len = _strlen(s);

	for (index = len -1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}

/**
 * _strlen -Imprime la longitud de un string
 * @s: Parametro
 * Return: Regresa el largo del string
 */
int _strlen(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
	{
		inc++;
	}

	return (inc);
}
