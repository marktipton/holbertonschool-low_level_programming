#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

int main(int __attribute__((unused)) argc, *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	int a = atoi(num1);
	int b = atoi(num2);

	if (num2 == 0 && (operator == "/" || operator == "%"))
	{
		printf("Error\n");
		exit (100);
		
	}
	if (get_op_func(a, b) == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	return (get_op_func(a, b));
}
