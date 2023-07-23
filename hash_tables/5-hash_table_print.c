#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp;


	if (ht == NULL)
		return;

	for (; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
}
