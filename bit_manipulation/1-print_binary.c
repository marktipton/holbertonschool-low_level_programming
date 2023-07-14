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
	
	if (n == 0) 
	{
		printf("0");
		return;
	}

	print_binary(n >> 1);
	printf("%lu", n & 1);

}
