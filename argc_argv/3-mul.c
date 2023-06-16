#include "main.h"
#include <stdio.h>

/**
 *
 *main - multiplies two numbers
 *
 *@x: multiplier
 *@y: also multiplier
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int x = *argv[1];
	int y = *argv[2];
	int z = x * y;


	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", z);
	return (0);

}
