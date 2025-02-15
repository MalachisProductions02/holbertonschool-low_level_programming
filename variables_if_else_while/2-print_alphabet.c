#include <stdio.h>

/**
 * main - Uso de putchar: printf para caracteres
 *
 * Return: Que aburrido, siempre es 0 y ¿si le pongo valor como 1?
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
