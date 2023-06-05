#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array of integers
 *
 * @a: idk
 * @n: number of elements in the array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i = 1;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	printf("%d", a[0]);

	while (i < n)
	{
		printf(", %d", a[i]);
		i++;
	}
putchar('\n');
}
