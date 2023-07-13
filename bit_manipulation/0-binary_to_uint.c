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
	i = 0;

	if (b == NULL)
		return (0);

	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		sum += (b[i] - '0') * _pow(2, len - i - 1);
	}	
        return (sum);
}

