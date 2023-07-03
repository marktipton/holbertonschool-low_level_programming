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
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	
	operator = argv[3];
	
	if (get_op_func(operator) == NULL || strlen(operator) != 1)
	{
		printf("Error\n");
		exit (99);
	}

	if (atoi(argv[4]) == 0 && (*operator == '/' || *operator == '%'))
	{
		printf("Error\n");
		exit (100);
		
	}
	printf("%d\n", get_op_func(operator)(atoi(argv[2]), atoi(argv[4]));
return(0);
}
