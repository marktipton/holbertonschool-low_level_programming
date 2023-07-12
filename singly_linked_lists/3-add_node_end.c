#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
  * _strlen - gets length of the string
  * @s: string
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * add_node_end - adds code to end of list
 *
 * @head: first node
 * @str: string to duplicate
 * Return: Address of new element of NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *previous_node;
	char *dup;
	int i, len;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new_node = *head;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(dup);
		return (NULL);
	}
	new_node->str = dup;
	new_node->len = len;
	new_node->next = NULL;
	if(*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	previous_node = *head;
	while (previous_node->next != NULL)
		previous_node = previous_node->next;
	previous_node->next = new_node;
	return (*head);
}
