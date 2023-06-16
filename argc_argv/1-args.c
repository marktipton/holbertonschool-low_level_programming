#include "main.h"
#include <stdio.h>
/**
 *
 *main - prints the number of arguments passed
 *
 *@argc: number of arguments
 *@argv: array of argument strings
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc);
	return (0);
}
