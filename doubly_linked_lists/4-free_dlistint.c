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

	current = head;

	while (current != NULL)
	{
		current = current->next;
		free(current);

	}
}
