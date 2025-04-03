#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node: Adds a new node at the begginning of a list_t list
 * @head: Pointer to the head of the lis
 * @str: String to be added (duplicated)
 * Description: This function traverses the linked list starting
 * from the head node and counts the number of the elements present
 * Return: Address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int len = 0;

	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
