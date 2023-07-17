#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t
 *
 * @head: pointer to head node
 * Return: contents of head node or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *cur_node;
	int contents;

	if (head == NULL)
		return 0;
	temp = *head;
	cur_node = *head;

	contents = cur_node->n;
	*head = cur_node->next;

	free(temp);

	return (contents);
}
