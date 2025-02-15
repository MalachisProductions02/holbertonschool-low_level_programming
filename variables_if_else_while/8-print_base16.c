#include <stdio.h>

/**
 * main - Imprimir todos los caracteres de base16 0-9 and a-f
 *
 * Return: 0...Yeah, it's 0...sure...
 *
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
