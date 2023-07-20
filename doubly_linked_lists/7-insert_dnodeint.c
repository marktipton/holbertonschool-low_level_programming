#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given index
 *
 * @h: pointer to head node
 * @idx: index to insert node
 * @n: data in node
 * Return: Address of new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int count;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	count = 0;
	current = *h;

	while (current->next != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (count < (idx - 1) && current->next == NULL)
		return (NULL);

	new_node->prev = current;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);

}
