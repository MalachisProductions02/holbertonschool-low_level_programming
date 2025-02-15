#include "main.h"

/**
 * _islower - Checker que identifica un caracter si es minuscula
 *
 * Return: 1 si es minuscula, 0 si no lo es
 *
 */
int _islower(int n)
{
	if (n >= 'a' && n <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
