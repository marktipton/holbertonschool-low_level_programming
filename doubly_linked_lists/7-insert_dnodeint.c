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
	tmp1 = *h;
	i = 0;
	if (new_node != NULL)
	{
		new_node->n = n;
		if (idx == 0)
		{
			if (*h != NULL)
			{
				new_node->next = *h;
				(*h)->prev = new_node;
			}
			*h = new_node;
			return (new_node);
		}
		for (; tmp1 != NULL && i < idx; i++)
		{
			tmp2 = tmp1;
			tmp1 = tmp1->next;
		}
		if (tmp1 != NULL)
		{
			new_node->next = tmp1;
			new_node->prev = tmp2;
			tmp1->prev = new_node;
			tmp2->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
