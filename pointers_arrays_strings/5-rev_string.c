#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
