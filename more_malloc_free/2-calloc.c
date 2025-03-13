#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Aparta memoria de un array de acuerdo a nmemb
 * @nmemb: Parametro
 * @size: Tamaño de array
 * Return: nmemb = 0 or size = 0 or failed, then return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;
	p = malloc(total);
       	if (p == NULL)
       	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
	{
		p[i] = 0;
	}

	return (p);
}
