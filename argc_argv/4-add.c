#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - adds positive integers.
 *
 *@argc: number of arguments
 *@argv: array of argument strings
 *
 *Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i = 1, num, sum = 0;

	while (i < argc)
	{
		num = atoi(argv[i]);
		if ((*argv[i] < 48) || (*argv[i] > 57))
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
		i++;
	}
	printf("%d\n", sum);
	return (0);

}
