#include "main.h"

/**
 *my_name_is - prints name of function
 *
 * @argc: total number of arguments
 * @argv: array of pointers 
 *
 *
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
	_putchar(*argv[i]);
}
_putchar ('\n');
return (0);
}
