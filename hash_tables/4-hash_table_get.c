#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table
 * @key: hash key
 * Return: value associated with key or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	long unsigned int index;
	hash_node_t *tmp;

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];


	if (tmp != 0 && strncmp(tmp->key, key, ht->size) == 0)
	{
		return ((char *)tmp);
	}
	
	return NULL;
}
