#include <stdio.h>
#include "main.h"
#include "_pow.c"
/**
 * print_binary - takes a decimal and prints it in binary
 *
 * @n: decimal input
 * Return: none
 */
void print_binary(unsigned long int n)
{

	if (n == 0)
	{
		return;
	}
	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) ? '1' : '0');
	}

}
