#include "main.h"

/**
 * print_last_digit - Imprime el ultimo digito
 * @n: Valor a calificar
 *
 *Return: None
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;  //Algo complejo...básicamente declara last_digit en n % 10 que es una unidad

	if (last_digit < 0)
	{
		last_digit = -last_digit;  //Si es menor que cero, cambia la jerarquía de la unidad
	}

	_putchar(last_digit + '0');  //Imprime el dígito PERO le suma el ASCII de cero para evitar que salgan otros caracteres que no sean números
	return (last_digit);  //Regresa el dígito
}
