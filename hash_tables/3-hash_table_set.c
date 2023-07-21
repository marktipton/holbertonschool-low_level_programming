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
	unsigned int index;
	hash_node_t *new_node;

	if (key == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t);

}
