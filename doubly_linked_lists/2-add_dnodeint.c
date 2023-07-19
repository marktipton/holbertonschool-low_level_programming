#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds node to the beginning of dlistint_t
 *
 * @head: head node
 * @n: data in new node
 * Return: address of new node or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	
	if ((*head) != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;

	return (*head);
}
