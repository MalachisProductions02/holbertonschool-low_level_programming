#include <stdio.h>

/**
 * main - Imprime tres combinaciones diferentes de numeros
 *
 * Return: 0
 */
int main(void)
{
	int c, i, n;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (n = '0'; n <= '9'; n++)
			{
				if (c < i && i < n)
				{
					putchar(c);
					putchar(i);
					putchar(n);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}				
