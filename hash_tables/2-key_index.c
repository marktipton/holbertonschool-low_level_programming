#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 *
 * @key: hash key
 * @size: size of hash table array
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int get_key;
	unsigned long int index;

	get_key = hash_djb2(key);
	index = get_key % size;

	return (index);

}
