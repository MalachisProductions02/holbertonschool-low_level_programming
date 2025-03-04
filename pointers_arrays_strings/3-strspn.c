#include "main.h"

/**
 * _strspn - Obtiene el numero de bytes de s que solo contiene bytes de accept
 * @s: String
 * @accept: Caracteres permitidos
 * Return: Regresa el valor de s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s)
	{
		found = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
