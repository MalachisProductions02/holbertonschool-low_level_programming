#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory.
 * @s1: First string.
 * @s2: Second string.
 * Return: Pointer to new string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2) // Funcion para concatenar dos strings
{
	char *concat; // caracter puntero hacia concat
	int i, j, len1 = 0, len2 = 0; // Entero i, j, len1 igualado a 0 y len2 igualado a 0

	if (s1 != NULL) // Si s1 no esta vacio
	{
		while (s1[len1]) // Bucle while cuando s1 tenga un valor
			len1++; // Suma uno a len1
	}

	if (s2 != NULL) // Si s2 no esta vacio
	{
		while (s2[len2]) // Bucle while cuando s2 tenga un valor
			len2++; // Suma uno a len2
	}

	concat = malloc(sizeof(char) * (len1 + len2 + 1)); // Pedir bytes para concat en char
	if (concat == NULL) // Si concat esta vacio
		return (NULL); // Regresa NULL

	for (i = 0; i < len1; i++) // Simple bucle for para i
		concat[i] = s1[i]; // Al llegar i al valor de len1, iguala la posicion actual de concat con el string en la misma posicion

	for (j = 0; j < len2; j++) // Simple bucle for para j
		concat[i + j] = s2[j]; // Al llegar j al valor de len2, junta los dos strings almacenados en concat 

	concat[i + j] = '\0'; // Indica que la concatenacion termino

	return (concat); // Regresa concat
}
