#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - finds number of elements in listint_t list
 *
 * @h: head pointer of linked list
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
