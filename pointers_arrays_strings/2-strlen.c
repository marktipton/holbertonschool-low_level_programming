#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
