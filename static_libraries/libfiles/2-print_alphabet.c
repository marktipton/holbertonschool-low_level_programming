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
char alphabet = 'a';
/* your code goes there */
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
