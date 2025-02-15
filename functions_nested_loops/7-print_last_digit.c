#include "main.h"

/**
 * print_last_digit - Imprime el ultimo digito
 * @n: Valor a calificar
 *
 *Return: None
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');
	
	return (last_digit);
}
