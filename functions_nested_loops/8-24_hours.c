#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *jack_bauer - somethings
 *
 * Return: always 0
 */
/* betty style doc for function main goes there */
void jack_bauer(void)
{
int n = 0;
while (n < 3)
{
_putchar(n);
while (n < 4)
{
_putchar(n);
_putchar(':');
while (n < 6)
{
_putchar(n);
while (n < 10)
{
_putchar(n);
n++;
}
n++;
}
n++;
}
n++;
}
_putchar('\n');
}
