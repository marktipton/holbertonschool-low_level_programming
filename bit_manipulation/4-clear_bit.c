#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: decimal input
 * @index: place where bit will be cleared
 * Return: 1 if the bit was cleared an -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 33)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
