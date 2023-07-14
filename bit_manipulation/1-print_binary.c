#include <stdio.h>
#include "main.h"
#include "_pow.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int digits;
	
	digits = 0;
	
	if (n == 0) 
	{
		printf("0");
		return;
	}

	print_binary(n >> 1);
	printf("%d", n & 1);

}
