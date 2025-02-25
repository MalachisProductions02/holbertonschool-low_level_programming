#include "main.h"

/**
 * print_most_numbers - Imprime una serie numerica sin imprimir el 2 y el 4
 * @i: Valor a ingresar
 * Return: Always 0 when is void function
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2') || (i == '4')
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
