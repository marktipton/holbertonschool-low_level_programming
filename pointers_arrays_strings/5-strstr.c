#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 *
 * @needle: the substring
 *
 * @haystack: the string to search
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
        int i = 0;
        int j = 0;

        while (s[i] != '\0')
        {
                while (accept[j] != '\0')
                {
                        if (s[i] == accept[j])
                        {
                                return (s);
                        }
                                        j++;
                }
                i++;
        }
        if (s[i] == '\0')
        {
        return (NULL);
        }
        return (0);
}

