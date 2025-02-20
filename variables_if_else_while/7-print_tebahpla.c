#include <stdio.h>

/**
 * main - Imprimir el alfabeto a reves JAJAAJA
 *
 * Return: I'm sure is 0 but I don't understand so much...  //Yes, it's zero
 *
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);  //Imprime el abecedario al revés
	}

	putchar('\n');

	return (0);
}
