#include "main.h"

/**
 * leet - Codifica letras a numeros
 * @s: Parametro
 * Return: Resultado de la funcion
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10 && s[i] != letters[j]; j++)
		{
			;
		}

		if (j < 10)
		{
			s[i] = numbers[j];
		}
	}
	return (s);
}
