#include "main.h"

/**
 * _sqrt_helper - Funcion de ayuda para calcular raiz
 * @n: Parametro
 * @guess: Segundo parametro
 * Return: Regresa n
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Calcula la raiz de un numero
 * @n: Parametro
 * Return: Regresa n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 1));
}
