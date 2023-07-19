#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *tmp;

	current = head;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;

	}
}
