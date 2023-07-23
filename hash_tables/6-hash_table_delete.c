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
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	i = 0;

	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			tmp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = tmp;
                }
                i++;
	}
	free(ht->array);
	free(ht);


}
