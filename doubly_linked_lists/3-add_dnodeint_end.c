#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds new node to end of dlistint_t
 *
 * @head: head node
 * @n: data in node
 *
 * Return: Address of new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	
	if (*head == NULL)
	{
		new_node = *head;
		return (*head);
	}

	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	current_node->next = new_node;
	new_node->prev = current_node;

	return (*head);
}
