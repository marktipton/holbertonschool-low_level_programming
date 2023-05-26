#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *main - somethings
 *
 * Return: always 0
 */
/* betty style doc for function main goes there */
void print_alphabet(void)
{
char x=97;
while (x <= 122)
{
_putchar(x);
x++;
}
_putchar('\n');
}
