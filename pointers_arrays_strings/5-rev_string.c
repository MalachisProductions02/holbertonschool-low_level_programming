#include "main.h"

/**
 * rev_string - Regresa un string pero invertido
 * @s: Parametro
 *Return: Always 0
 */
void rev_string(char *s)
{
	int i = 0, length;

	lenght = _strlen(s) - 1;
	while (length > i)
	{
		swap_char(s + length, s + i);
		i++;
		length--;
	}
}

/**
 * _strlen - Identifica la longitud de los caracteres
 * @s: Parametro
 * Return: Regresa la longitud de los caracteres
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

/**
 * swap_char - Invierte dos caracteres
 * @a: Primer parametro
 * @b: Segundo parametro
 * Return: Nothing
 */
void swap_char(char *a, *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
