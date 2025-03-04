#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - IMprime una tabla de ajedrez
 * @a: Parametro
 * Return: Nothing, it's a void function ._.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
