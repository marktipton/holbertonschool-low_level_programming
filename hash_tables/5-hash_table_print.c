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
	int check = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (check == 1)
				printf(", ")
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			check = 1;
		}
		i++;
	}
	printf("}");
}
