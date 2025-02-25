#include "main.h"

/**
 * more_numbers - Imprime una serie numerica del 0 al 14, 10 veces
 * 
 * Return: Always 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
