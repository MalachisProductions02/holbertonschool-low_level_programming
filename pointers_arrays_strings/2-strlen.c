#include "main.h"

/**
 * _strlen - Regresa el largo de una string
 * @s: Parametro
 * Return: Regresa lenght
 */
int _strlen(char *s)
{
	int count, inc;
	inc = 0;
	for (count  = 0; s[count] != '\0'; count++)
	{
		inc++;
	}

	return (inc);
}
