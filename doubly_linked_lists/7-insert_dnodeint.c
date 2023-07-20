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
	dlistint_t *new_node, *tmp1, *tmp2;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	tmp1 = *h;
	tmp2 = NULL;
	i = 0;
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		tmp1->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (;tmp1->next != NULL && i < idx - 1; i++)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
	}
	if (tmp1 == NULL || i != idx)
		return (NULL);
	new_node->next = tmp1;
	new_node->prev = tmp2;
	tmp2->next = new_node;
	tmp1->prev = new_node;
	return (new_node);
}
