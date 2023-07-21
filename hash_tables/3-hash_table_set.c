#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 *
 * @ht: hash table
 * @key: hash key
 * @value: value associated w/ key
 * Return: 1 on success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (key == NULL || strlen(key) == 0)
		return (0);
	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			new_node->value = strdup(value);
			return (1);
		}
		new_node = new_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	
	if (new_node == NULL)
		return (0);
	index = hash_djb2((const unsigned char *)key) % sizeof(ht);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
