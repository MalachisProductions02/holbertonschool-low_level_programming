#include "main.h"

/**
 * _pow_recursion - Eleva x a la potencia de y
 * @x: Parametro
 * @y; Parametro dos
 * Return: x^y, o -1 si y es negativo
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	retrn (x * _pow_recursion(x, y - 1));
}
