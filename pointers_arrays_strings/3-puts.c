#include "main.h"

/**
 * _puts - Imprime un string
 * @str: Parametro
 * Description: Imprime un string
 * Return: Regresa el numero de caracteres de un string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
