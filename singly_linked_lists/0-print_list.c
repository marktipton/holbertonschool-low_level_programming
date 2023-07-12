#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints a list of the elements of list_t
 *
 * @h: pointer to list elements
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;
	
	if (h == NULL)
		return (0); 
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%u} %s\n", h->len, "(nil)");
		else 
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return(i);
}
