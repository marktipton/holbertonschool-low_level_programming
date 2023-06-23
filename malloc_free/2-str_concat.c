#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *@s1: og string
 *@s2: string addition
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s3 = malloc((len1 + len2 + 1) * sizeof(char));

        strncpy(s3, s1, len1);
        strncpy(s3 + len1, s2, len2);
        s3[len1 + len2] = '\0';

	if (s3 == NULL)
	{
		return (NULL);
	}
	return (s3);
}
