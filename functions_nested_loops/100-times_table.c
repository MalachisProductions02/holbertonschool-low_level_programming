#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Imprime la tabla de multiplicar de n numero, empezando desde cero
 * @n: Valor numerico
 *
 * Return: Si n es mayor que 15 o menor que 0, no se imprime nada
 */
void print_times_table(int n)
{
	int i, j pred;
	char c;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;

			if (prod < 10)
			{
				c = prod + '0';
				write(1, &c, 1);
			}
			else if ( prod < 100)
			{
				c = (prod / 10) + '0';
				write(1, &c, 1);
				c = (prod % 10) + '0';
				write(1, &c, 1);
			}
			else
			{
				c = (prod / 100) + '0';
				write(1, &c, 1);
				c = ((prod / 10) % 10) + '0';
				write(1, &c, 1);
				c = (prod % 10) + '0';
				write(1, &c, 1);
			}
			


