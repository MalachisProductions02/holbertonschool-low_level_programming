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

	dup = malloc((len + 1) * sizeof(char)); // Pedir bytes para len + 1 en char

	if (dup == NULL) // Si dup esta vacio
	{
		return (NULL); // Regresa NULL
	}

	for (i = 0; i <= len; i++) // Simple bucle for 
	{
		dup[i] = str[i]; // la posicion actual de dup arrojara el string en la misma pisicion
	}

	return (dup); // Regresa dup
}
