#include "main.h"

/**
 * print_sign - imprime un simbolo de acuerdo a la jerarquia de un numero
 * @n: Valor a revisar
 *
 * Return: 1 si es mayor a 0, 0 si es igual a 0 y -1 si es menor a 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
