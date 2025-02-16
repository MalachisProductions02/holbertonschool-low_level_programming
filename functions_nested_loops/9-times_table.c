#include "main.h"

/**
 * times_table - Imprime la tabla de multiplicar del 1 al 9
 *
 * Return: 0
 *
 */
void times_table(void)
{
	int n, c, result;

	for (n = 0; n < 10; n++)
	{
		for (c = 0; c < 10; c++)
		{
			result = n * c;

			if (c != 0)
			{
				_putchar(',');
			}

			if (result < 10 && c != 0)
			{
				_putchar(' ');
			}

			_putchar('0' + result);

			if (c == 9)
			{
				_putchar('\n');
			}
		}
	}
}
