#include <stdio.h>

/**
 * main - Imprimir el alfabeto en minuscula/mayuscula
 *
 * Return: Un dia intentare ponerle un valor de 1...
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
