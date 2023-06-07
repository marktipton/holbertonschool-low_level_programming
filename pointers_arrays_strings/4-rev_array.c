#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i = 0;
int length = n + 1;
int temp;

while (i < length)
{
	temp = a[i];
	a[i] = a[length];
	a[length] = temp;
	length--;
	i++;
}
}
