#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: decimal number to convert to 
 * @index: decimal input
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 33)
		return (-1);

	return ((n & (1 << index)) != 0);
}
