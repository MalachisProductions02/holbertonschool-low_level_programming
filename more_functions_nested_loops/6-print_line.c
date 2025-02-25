#include "main.h"

/*
 * print_line - Imprime una linea recta de guiones bajos
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
