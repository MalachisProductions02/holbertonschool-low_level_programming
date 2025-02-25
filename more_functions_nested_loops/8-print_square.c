#include "main.h"

/**
 * print_square - Imprime un cuadrado
 * @size: Parametro
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int med1, med2;

	if (size > 0)
	{
		for (med1 = 0; med1 < size; med1++)
		{
			for (med2 = 0; med2 < (size - 1); med2++)
			{
				_putchar('#');
			}
			
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}	
