#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * size_t print_list - Prints all elements for a list
 * @h: The head of the linked list
 * 
 * Description: This function traverses a singly linked list and prints
 * the length and string content of each node. If a node's string is NULL,
 * it prints "[0] (nil)". It returns the total number of nodes.
 * 
 * Return: If the str is NULL, prints [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
