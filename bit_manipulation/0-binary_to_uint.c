#include <stdio.h>
#include "main.h"
#include <math.h>
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
	unsigned int i;
	unsigned int sum;
	unsigned int k;

	len = strlen(b) - 1;
	i = 1;
	sum = 0;
	k = len;

	if (b == NULL)
		return (0);

	for (; k > 0; k--)
	{
		if (b[k] != '1' || b[k] != '0')
			return (0);
		
		while (i <= len && b[k] == '1')
		{
			
			sum *= 2
			i++;
		}	
	}	
	return (sum);
}
