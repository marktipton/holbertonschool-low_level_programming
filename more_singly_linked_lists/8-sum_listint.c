#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums all of the data in the linked list
 *
 * @head: pointer to head node
 * Return: sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	sum = 0;
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
