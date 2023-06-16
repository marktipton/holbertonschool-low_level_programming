#include "main.h"
#include <stdio.h>

/**
 *
 *main - multiplies two numbers
 *
 *@argc: number of arguments
 *@argv: array of argument strings
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int x = ('0' + *argv[argc - 2]);
	int y = ('0' + *argv[argc - 1]);
	int z = x * y;


	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", z);
	return (0);

}
