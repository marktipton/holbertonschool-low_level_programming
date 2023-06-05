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
        static int i, len, temp;
	len = strlen(s);

	if (i < len/2)
        {
                temp = s[i];
		s[i] = s[len - i - 1];
		temp = s[len - i - 1];
		i++;
		rev_string(s);
	}
        _putchar('\n');
}

}
