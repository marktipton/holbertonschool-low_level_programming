#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - check the code
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes to take from string 2
 * Return: concatenated string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = strlen(s1);
	char *s3 = malloc((len1 + n + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (s3 == NULL)
	{
		return (NULL);
	}
	strncpy(s3, s1, len1);
	strncpy(s3 + len1, s2, n);
	s3[len1 + n] = '\0';
	return (s3);
}
