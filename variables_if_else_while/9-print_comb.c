#include <stdio.h>

/**
 * main - Imprimir serie de numeros separados por espacio y comas
 *
 * Return: 0, I'm sure 100% :D
 *
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
