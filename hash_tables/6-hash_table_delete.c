#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp;

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];


	if (tmp != NULL && strncmp(tmp->key, key, ht->size) == 0)
	{
		tmp = NULL;
	}

}
