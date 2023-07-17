#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 *
 * @head: pointer to head node
 * @idx: index of new node
 * Return: address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *cur_node;
	listint_t *prev_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	cur_node = *head;
	prev_node = NULL;
	i = 0;

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (cur_node != NULL && i < idx)
	{
		prev_node = cur_node;
		cur_node = cur_node->next;
		i++;
	}

	if (cur_node == NULL || i != idx)
		return (NULL);
	new_node->next = cur_node;
	prev_node->next = new_node;
	
	return (new_node);
}
