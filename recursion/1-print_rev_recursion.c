#include "main.h"

/**
 * _print_rev_recursion - Imprime un string al reves
 * @s: Parametro
 * Return: Nothing, a void function
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
