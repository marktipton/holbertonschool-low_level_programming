#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - gets the number fo elements in dlistint_t
 *
 * @h: head node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	len = 1;

	while (h->next != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
