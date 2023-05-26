#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main"
/**
 *print_sign - somethings
 *
 * Return: always 0
 */
/* betty style doc for function main goes there */
int print_sign(int n)
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


