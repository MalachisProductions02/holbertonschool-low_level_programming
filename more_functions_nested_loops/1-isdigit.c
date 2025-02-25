#include "main.h"

/**
 * _isdigit - Identifica si el caracter es un digito
 * @c: Valor a ingresar
 * Return: 1 si es un digito, 0 si no lo es
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
