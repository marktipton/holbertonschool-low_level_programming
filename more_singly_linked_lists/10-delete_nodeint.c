#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 *
 * @head: double pointer to head node
 * @index: index of the node to be deleted
 *
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *del;

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
	else
	{
		for (; i < index - 1; i++)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
		}


	}

	del = temp->next;
	free(del);
	return (1);
}
