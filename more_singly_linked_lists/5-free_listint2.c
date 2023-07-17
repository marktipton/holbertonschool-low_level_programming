#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 *
 * @head: double pointer to first node in list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *cur_node;
	listint_t *temp_node;

	if (head == NULL)
		return;
	cur_node = *head;
	while (cur_node != NULL)
	{
		temp_node = cur_node;
		cur_node = cur_node->next;
		free(temp);
	}
	*head = NULL;
}
