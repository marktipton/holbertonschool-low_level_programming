#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 *@a: square array
 *@size: size of square
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int i = 0;
int sumdiag1 = 0;
int sumdiag2 = 0;

while (i < size)
{
	sumdiag1 = sumdiag1 + a[i * size + i];
	sumdiag2 = sumdiag2 + a[i * size + (size - 1 - i)];
	i++;
}
printf("%d, %d", sumdiag1, sumdiag2);
}
