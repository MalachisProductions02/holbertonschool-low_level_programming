#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

/**
 * struct list_s - singly_linked_list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * size_t print_list - Functions that prints all elements for a list
 * @list_t: The list
 * @h: Parameter
 * Return: If str is NULL, prints [0] (nil)
 */

size_t print_list(const list_t *h);

int _putchar(char);

#endif /* MAIN_H */
