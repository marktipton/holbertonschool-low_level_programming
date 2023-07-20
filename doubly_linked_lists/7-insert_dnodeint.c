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
	dlistint_t *tmp1;
	dlistint_t *tmp2;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*h == NULL)
	{
		if (idx != 0)
		{
			return (NULL);
		}
		*h = new_node;
		return (new_node);
	}

	new_node->n = n;
	count = 0;
	current = *h;

	while (current != NULL && count < idx - 1)
	{
		count++;
		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;
	new_node->prev = current;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);

}
