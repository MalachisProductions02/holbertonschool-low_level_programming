#include "main.h"

/**
 * swap_int - Intercambia valores de a y b
 * @a: Primer parametro
 * @b: Segundo parametro
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
