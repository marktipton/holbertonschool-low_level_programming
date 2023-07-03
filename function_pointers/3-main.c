#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - convert arguments into int
 *@argc: argument count
 *@argv: argument array
 *
 *Return: operation result
 */

int main(int argc, char **argv)
{
	int num1;
	char *operator;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	
	num1 = atoi(argv[2]);
	operator = argv[3];
	num2 = atoi(argv[3]);

	if (num2 == 0 && (strcmp(operator, "&") == 0 || strcmp(operator, "%") == 0))
	{
		printf("Error\n");
		exit (100);
		
	}
	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
return(0);
}
