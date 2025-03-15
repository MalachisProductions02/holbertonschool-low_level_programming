#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Regresa un puntero a un string dado
 * @str: Parametro
 * Return: NULL si string esta vacio
 */
char *_strdup(char *str) // Duplica una string dada
{
	char *dup; // Caracter con puntero hacia dup
	int i, len = 0; // Enteros i y len igualado a cero

	if (str == NULL) // Si str es igual a NULL
	{
		return (NULL); // Regresa NULL 
	}

	while (str[len] != '\0') // Si len no esta en la ultima linea
	{
		len++; // Suma uno a len
	}

	dup = malloc((len + 1) * sizeof(char)); // 

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
