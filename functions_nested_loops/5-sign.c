#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *print_sign - somethings
 *
 * Return: always 0
 */
/* betty style doc for function main goes there */
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
if (n == 0)
{
return (0);
_putchar('0');
}
if (n < 0)
{
return (-1);
_putchar('-');
}
_putchar('\n');
}
