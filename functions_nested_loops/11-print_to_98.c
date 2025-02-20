include "main.h"

/**
* print_to_98 - Imprime numeros del 0 al 98
*@n: Valor numerico
*
* Return: Always 0
*/
void print_to_98(int n)
{
	int num, i, first;

	int sequences[4] = {0, 98, 111, -10};

	for (i = 0; i < 4; 1++)
	{
		num = sequences[i];
		first = 1;

		while (num != 98)
		{
			if (!first)
			{
				_putchar(',');
				_putchar(' ');
			}
			first = 0;

			if (num < 0)
			{
				_putchar('-');

				if (num <= 10)
				{
					_putchar('0' + (-num / 10));
				}
				_putchar('0' + (-num % 10));
			}
			else
			{
				if (num >= 100)
				{
					_putchar('0' + (num / 100));
					_putchar('0' + ((num / 10) % 10));
				}
				else if (num >= 10)
				{
					_putchar('0' (num / 10));
				}
				_putchar('0' + (num % 10));
			}

			if (num > 98)
			{
				num--;
			}
			else 
			{
				num++;
			}
		}

		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
}
