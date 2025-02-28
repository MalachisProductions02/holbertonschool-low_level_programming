#include "main.h"

/**
 * _strcmp - Compara dos strings
 * @s1: Primer string
 * @s2: Segundo string
 * Return:
 *   < 0 si s1 es menor que s2
 *   > 0 si s1 es mayor que s2
 *   0 si son iguales
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (s1[i] - s2[i]);
}
