#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * size_t print_list - Prints all elements for a list
 * @size_t: The list
 * @h: Parameter
 * Return: If the str is NULL, prints [0] (nil)
 */
size_t print_list(const size_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h -> str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h -> len h -> str);

		h = h -> next;
		count++;
	}
	return (count);
}
