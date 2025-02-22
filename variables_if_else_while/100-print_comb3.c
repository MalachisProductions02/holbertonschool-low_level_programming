#include <stdio.h>

/**
 * main - Imprime numeros del 00 al 89
 *
 * Return: 0
 */
int main(void)
{
	int n = '0';
	int i = '0';

	while (n <= '9')
	{
		while (i <= '9')
		{
			if (!(n > i || n == i))
			{
				putchar(n);
				putchar(i);

				if (n == '8' && i == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			i++;
		}
		i = '0';
		n++;
	}
	return (0);
}
