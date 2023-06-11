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
int j = 0;
int sumdiag = 0;

while (i < size)
{
	sumdiag = sumdiag + a[i][j];
	j++;
	i++;
}
i = 0;
while (i < size)
{
	sumdiag = sumdiag + a[i][j];
	j--;
	i++;

}
printf("%d", sumdiag);
}
