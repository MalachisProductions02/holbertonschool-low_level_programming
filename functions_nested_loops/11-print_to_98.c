#include "main.h"

/**
* print_to_98 - Imprime numeros del 0 al 98
*@n: Valor numerico
*
* Return: Always 0
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			if (n < 0)
			{
				_putchar('-');
				n = -n;
			}

			if (n >= 100)
			{
				_putchar('0' + (n / 100));
				_putchar('0' + ((n / 10) % 10));
			}
			else if (n >= 10)
			{
				_putchar('0' + (n / 10));
			}
			_putchar('0' + (n % 10));

			_putchar(',');
			_putchar(' ');

			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			if (n < 0)
			{
				_putchar('-');
				n = -n;
			}

			if (n >= 100)
			{
				_putchar('0' + (n / 100));
				_putchar('0' + ((n / 10) % 10));
			}
			else if (n >= 10)
			{
				_putchar('0' + (n / 10));
			}
			_putchar('0' + (n % 10));

			_putchar(',');
			_putchar(' ');

			n++;
		}
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
