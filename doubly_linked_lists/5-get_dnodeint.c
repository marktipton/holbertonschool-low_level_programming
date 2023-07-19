#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 *
 * @head: head node
 * @index: index to get node from
 * Return: nth node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;
	count = 0;

	while (current != NULL && count < index)
	{
		count++;
		current = current->next;
	}

	return (current);
}
