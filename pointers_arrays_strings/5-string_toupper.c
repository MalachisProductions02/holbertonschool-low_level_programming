#include "main.h"

/**
 * string_toupper - Cambia todas las minusculas a mayusculas
 * @str: Parametro
 * Return: Resultado de string_toupper
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
