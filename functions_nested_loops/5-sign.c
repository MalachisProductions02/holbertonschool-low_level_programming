#include "main.h"

/**
 * print_sign - imprime un simbolo de acuerdo a la jerarquia de un numero
 * @n: Valor a revisar
 *
 * Return: 1 si es mayor a 0, 0 si es igual a 0 y -1 si es menor a 0
 *
 */
int print_sign(int n)
{
	if (n > 0)  //Filtro para averiguar si el número es mayor que cero
	{
		_putchar('+');  //Si n es mayor que cero, imprime el signo '+'
		return (1);  //Verdadero
	}
	else if (n == 0)  //Filtro para averiguar si el número es igual a cero
	{
		_putchar('0');  //Si es cero, imprime cero
		return (0);  //Falso
	}
	else
	{
		_putchar('-');  //Si el número no es ni mayor o igual que cero, imprime el signo '-'
		return (-1);  //...no sé si cuenta como verdadero o falso....digamos que....verdadero -1 XD
	}
}
