#include "main.h"

/**
 *_isupper - Funcionq ue detecta si el caracter es mayuscula o no
 *@c: Variable tipo caracter
 *Return: 1 si es mayuscula, 0 si no lo es
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
