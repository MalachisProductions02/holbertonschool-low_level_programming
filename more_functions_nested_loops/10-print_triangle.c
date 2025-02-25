#include "main.h"

/**
 * print_triangle - Imprime un triangulo
 * @size: Parametro
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int med1, med2;

	if (size > 0)
	{
		for (med1 = 1; med1 <= size; med1++)
		{
			for (med2 = size - med1; med2 > 0; med2--)
			{
				_putchar(' ');
			}

			for (med2 = 0; med < med1; med2++)
			{
				_putchar('#');
			}

			if (med1 == size)
			{
				continue;
			}

			_putchar('\n');
		}
	}

	_putchar('\n');
}
