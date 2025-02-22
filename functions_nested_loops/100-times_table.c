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
	int i, j, prod;
	
	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;

			if (j == 0)
			{
				printf("%d", prod);
			}
			else
			{
				printf(", %3d", prod);
			}
		}
		printf('\n');
	}
}	
