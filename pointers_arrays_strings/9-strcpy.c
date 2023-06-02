#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src and return it to dest
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
