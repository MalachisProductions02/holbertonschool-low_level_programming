#include "main.h"

/**
 * _strpbrk - Busca en s el primer caracter que coincida con accept
 * @s: String
 * @accept: Paraetro
 * Return: Regresa s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
