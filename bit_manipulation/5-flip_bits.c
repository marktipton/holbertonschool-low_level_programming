#include <stdio.h>
#include "main.h"

/**
 * count_bits - counts bits that need to be flipped
 *
 * @b: XOR of number n and m
 *
 * Return: number of bits flipped
 */

unsigned int count_bits(unsigned long int b)
{
	int count;

	count = 0;
	while (b > 0)
	{
		count++;
		b = b & (b - 1);
	}
	return (count);
}
/**
 * flip_bits - finds the number of bits flipped to convert number
 *
 * @n: first number
 * @m: number to convert n to
 * Return: number of bits flipped
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}
