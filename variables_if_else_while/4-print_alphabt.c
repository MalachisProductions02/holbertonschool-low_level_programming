#include <stdio.h>

/**
 * main - Imprime el alfabeto sin e ni q
 *
 * Return: 0
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c); //Imprime el abecedario pero usando un filtro para evitar los caracteres: 'e' y 'q'
		}
	}

	putchar('\n');

	return (0);
}
