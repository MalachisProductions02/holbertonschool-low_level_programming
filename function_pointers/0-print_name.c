#include "function_pointers"
#include <stdio.h>

/**
 * print_name - Imprime un nombre usando function pointer
 * @name: Parametro
 * @f: Regresa nombre
 */
void print_name(char *name, void (+f)(char))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
