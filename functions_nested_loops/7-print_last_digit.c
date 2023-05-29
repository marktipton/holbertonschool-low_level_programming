#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - somethings
 *
 *@r: (print ld of this integer)
 *
 * Return: always 0
 */
/* betty style doc for function main goes there */
int print_last_digit(int r)
{
int n;
n = r % 10;
_putchar('0' + n);
return (n);
_putchar('\n');
}
