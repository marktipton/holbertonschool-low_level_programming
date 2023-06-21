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
	char *s3;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	s3 = malloc((len1 + len2 + 1) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	s3 = strcat(s1, s2);
	return (s3);

}
