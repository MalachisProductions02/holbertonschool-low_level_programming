#include "main.h"

/**
 * is_divisible - Revisa que n sea divisible
 * @i: Parametro
 * @n: Parametro a dar
 * Return: Regresa n
 */
int is_divisible(int n, int i)
{
	if (i * i > n)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (1);
	}
	return (is_divisible(n, i + 1));
}

/**
 * is_prime_number - Identifica si n es numero primo
 * @n: Parametro
 * Return: Regresa n
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_divisible(n, 2) == 0 ? 1 : 0);
}
