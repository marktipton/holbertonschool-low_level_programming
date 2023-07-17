#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node in the listint_t list
 *
 * @head: pointer to head node
 * @index: index of node starting at 0
 * Return: nth node or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;
	
	if (head == NULL)
		return (NULL);
	current = head;
	count = 0;

	while (current != NULL && count < index)
	{
		count++;
		current = current->next;
	}
	if (count == index)
		return (current);
	else
		return NULL;
}
