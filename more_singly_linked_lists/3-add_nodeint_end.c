#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node to end of listint_t
 *
 * @head: first node in list
 * @n: integer to put in new node
 * Return: Address of new node or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current_node = *head;
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;
	return (*head);
}
