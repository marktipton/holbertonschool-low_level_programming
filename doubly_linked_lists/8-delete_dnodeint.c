#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
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

	temp = *head;
	del = *head;
	i = 0;

	if (index == 0 && *head != NULL)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (i < index - 1 && del != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	del = temp->next;
	temp->next = del->next;
	if (del->next != NULL)
		del->next->prev = temp;
	free(del);
	return (1);

}
