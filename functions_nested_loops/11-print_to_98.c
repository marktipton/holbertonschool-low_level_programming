#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - somethings
 *
 * Return: always 0
 */
/* betty style doc for function main goes there */
void print_to_98(int n)
{
char x = 97;
int n = 0;
while (n <=9)
{
while (x <= 122)
{
_putchar(x);
x++;
}
n++;
}
_putchar('\n');
}


