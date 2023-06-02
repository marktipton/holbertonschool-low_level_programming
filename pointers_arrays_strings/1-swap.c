#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of integers a and b 
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
