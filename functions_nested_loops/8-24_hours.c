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
int a = 0;
int b = 0;
int c = 0;
int d = 0;
while (a < 3)
{
_putchar(a);
while (b < 10)
{
_putchar(b);
_putchar(':');
while (c < 6)
{
_putchar(c);
while (d < 10)
{
_putchar(d);
d++;
_putchar('\n');
}
c++;
d = 0;
}
if ((a == 2) && (b == 3))
{
;
}
else
{
b++;
}
c = 0;
}
a++;
b = 0;
}
}
