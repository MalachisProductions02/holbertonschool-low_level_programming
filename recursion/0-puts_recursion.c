#include "main.h"

/**
 * _puts_recursion - Imprime un string seguido de una linea
 * @s: Parametro
 * Return: Nothing, it's a void function
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
