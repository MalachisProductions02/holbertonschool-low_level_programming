#include "main.h"

/**
 * _strlen_recursion - Regresa el tamaño del string
 * @s: Parametro
 * Return: Resultado del string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	return (1 + _strlen_recursion(s + 1));
}
