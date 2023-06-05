#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 * Return: Always 0.
 */
void rev_string(char *s)
{
        if (*s != '\0')
        {
		rev_string(s + 1);
                _putchar(*s);
        }
        _putchar('\n');

}
