#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - somethings
 *
 * Return: always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
int n = 48;
/* your code goes there */
while (n <= 57)
{
/*putchar(n);*/
putchar(n % 16 == 15);
n++;
}
putchar('\n');
return (0);
}
