#include "3-calc.h"

/**
 * op_add - Suma dos números.
 * @a: El primer número.
 * @b: El segundo número.
 * Return: El resultado de la suma de a y b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Resta dos números.
 * @a: El primer número.
 * @b: El segundo número.
 * Return: El resultado de la resta de a y b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplica dos números.
 * @a: El primer número.
 * @b: El segundo número.
 * Return: El resultado de la multiplicación de a y b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide dos números.
 * @a: El primer número.
 * @b: El segundo número.
 * Return: El resultado de la división de a entre b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calcula el módulo de dos números.
 * @a: El primer número.
 * @b: El segundo número.
 * Return: El resultado del módulo de a y b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
