#include "main.h"

/**
 * rev_array - Invierte un listado de enteros
 * @a: variable puntero del listado
 * @n: Parametro
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 -i] = tmp;
	}
}
