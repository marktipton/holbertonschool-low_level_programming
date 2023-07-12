#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - list number of elements in linked list list_t
 *
 * @h: 
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
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
