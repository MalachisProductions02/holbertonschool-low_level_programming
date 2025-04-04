#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index in a dlistint_t list
 * @head: Pointer to the head of the list
 * @index: Index of the node to delete
 * Return: 1 if it successful, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
		temp->->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
