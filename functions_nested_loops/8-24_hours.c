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
int a = 0, b = 0, c = 0, d = 0;
while (a < 3)
{
	while (b < 10)
		{
		while (c < 6)
			{
			while (d < 10)
				{
				_putchar('0' + a);
				_putchar('0' + b);
				_putchar(':');
				_putchar('0' + c);
				_putchar('0' + d);
				d++;
				_putchar('\n');
				if ((a == 2) && (b == 3) && (c == 5) && (d == 10))
					{
					goto newday;
					}
				else
				{
				;
				}
				}
				c++;
				d = 0;
			}
			b++;
			c = 0;
		}
		a++;
		b = 0;
}
newday:;
}
