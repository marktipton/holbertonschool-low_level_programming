#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main"
/**
 *times_table - somethings
 *
 * Return: always 0
 */
/* betty style doc for function main goes the*/
void times_table(void)
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


