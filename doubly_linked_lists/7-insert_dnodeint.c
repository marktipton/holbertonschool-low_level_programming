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

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (h == NULL)
		return (NULL);

	new_node->n = n;
	count = 1;
	current = *h;

	while (current != NULL && count < idx)
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
