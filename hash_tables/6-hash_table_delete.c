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

	if (ht == NULL)
		return;

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			tmp = ht->array[i]->next;
			free(ht->array[i]->key;
			free(ht->array[i]->value;
			free(ht->array[i]);
			ht->array[i] = next;
                }
                i++;
	}
	free(ht->array);
	free(ht);


}
