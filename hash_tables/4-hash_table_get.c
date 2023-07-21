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
	index = key_index((const unsigned char *)key, ht->size);
    
    Ht_item* item = table->items[index];

    // Provide only non-NULL values.
    if (item != NULL)
    {
        if (strcmp(item->key, key) == 0)
            return item->value;
    }

    return NULL;
}
