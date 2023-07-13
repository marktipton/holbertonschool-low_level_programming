#include <stdio.h>
#include "main.h"
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - converts binary number to unsigned int
 *
 * @b: pointer to a string of 0's and 1's
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	unsigned int i;
	unsigned int sum;

	len = strlen(b);
	i = 1;
	sum = 0;

	if (b == NULL)
		return (0);

	for (; len - 1 > 0; len--)
	{
		if (b[len] != '1' || b[len] != '0')
			return (0);
		if (b[len] == '1')
			sum += pow(2, i);
		i++;	
	}	
	return (sum);
}
