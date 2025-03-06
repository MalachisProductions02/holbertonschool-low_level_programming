#include "main.h"

/**
 * factorial - Imprime numeros factoriales
 * @n: Parametro
 * Return: n < 0 = -1, 0 = 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
