#include "main.h"

/**
 * print_numbers - Imprime los numeros del 0 al 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for ( i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
