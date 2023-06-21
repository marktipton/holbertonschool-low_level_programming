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
	char *s3 = strcat(s1, s2);
	int len = strlen(s3);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s3 = malloc((len + 1) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	return (s3);

}
