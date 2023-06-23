#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code
 *@b: unsigned int to allocate memory for
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptb = malloc(sizeof(unsigned int));
	
	if (ptb == NULL)
		exit(98);
	*ptb = b; 
	return (ptb); 
}
