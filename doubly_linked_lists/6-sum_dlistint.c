#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum all the data in the dlistint_t list
 *
 * @head: head node
 * Return: sum or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
		return (0);
	current = head;
	sum = 0;


	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
