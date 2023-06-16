#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers
 *
 *@argc: number of arguments
 *@argv: array of argument strings
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	int z = x * y;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	printf("%d\n", z);
	}
	return (0);

}
