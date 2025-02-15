#include "main.h"

/**
 * print_alphabet_x10 - IMprime el alfabeto 10 veces
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	int n;
	char c;

	for ( n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}

	_putchar('\n');
}
