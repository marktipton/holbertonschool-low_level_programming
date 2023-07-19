#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnode_int_at_index - delete node at index
 *
 * @head: pointer to head node
 * @index: index of node to be deleted
 * Return: 1 on success -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;
	dlistint_t *del;

	if (head == NULL)
		return (-1);

	temp = *head;
	i = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}

	del = temp->next;
	free(del);
	return (1);
}
