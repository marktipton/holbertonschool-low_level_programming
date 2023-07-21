#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of hash table array
 * Return: pointer to hash table or NULL if something failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
       
	new_table = malloc(sizeof(hash_table_t));

	new_table->size = size;
	if (new_table == NULL)
		return (NULL);

}
