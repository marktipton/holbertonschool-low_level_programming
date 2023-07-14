#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: decimal input
 * @index: index where value needs to be set
 * Return: 1 if it worked and -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 33)
		return (-1);

	*n = *n | (1 << index);
	return (1);
	
}
