#include <stdio.h>
#include "main.h"
#include "_pow.c"
#include <string.h>

/**
 * binary_to_uint - converts binary number to unsigned int
 *
 * @b: pointer to a string of 0's and 1's
 * Return: sum or 0 if null or nonbinary character
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	unsigned int sum;
	unsigned int i;


	len = strlen(b);
	sum = 0;
	i = 1;

	if (b == NULL)
		return (0);

	for (; len > 0; len--)
	{
		if (b[len] != 1 && b[len] != 0)
			return (0);
		if (b[len] == 1)
			sum += _pow(2, i);
		i++;	
	}	
        return (sum);
}

