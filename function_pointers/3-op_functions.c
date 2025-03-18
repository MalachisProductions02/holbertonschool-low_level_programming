#include "calc.h"

/**
 * op_add - Suma
 * @a: Parametro
 * @b: Parametro
 * Return: La suma de a y b
 */
int op_add(int a, int b)
{
	return a+ b;
}

/**
 * op_sub - Resta
 * @a: Parametro
 * @b: Parametro
 * Return: La resta de a y b
 */
int op_sub(int a, int b)
{
	return a-b;
}

/**
 * op_mul - Multiplicacion
 * @a: Parametro
 * @b: Parametro
 * Return: El producto de a y b
 */
int op_mul(int a, int b)
{
	return a * b;
}

/**
 * op_div - Division
 * @a: Parametro
 * @b: Parametro
 * Return: El resultado de a y b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return a / b;
}

/**
 * op_mod - Residuo
 * @a: Parametro
 * @b: Parametro
 * Return: El residuo de la division de a y b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return a % b;
}
