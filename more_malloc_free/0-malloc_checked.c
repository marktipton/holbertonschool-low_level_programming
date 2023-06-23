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
	void *ptb;
       	ptb = malloc(b);

	if (ptb == NULL)
		exit(98);

	return (ptb);
}
