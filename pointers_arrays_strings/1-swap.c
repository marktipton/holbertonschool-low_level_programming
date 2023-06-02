#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of integers a and b
 *
 * @a: swap var 1
 * @b: swap var 2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
