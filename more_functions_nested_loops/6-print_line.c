#include "main.h"

/*
 * print_line - Imprime una linea xd si, eso es todo
 * @n: Parametro
 * Return: 0
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
