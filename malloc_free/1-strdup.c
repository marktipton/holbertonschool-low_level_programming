#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return duplicate of string
 *@str: string to be copied
 * Return: NULL if str = NULL or the pointer to the new memory
 */
char *_strdup(char *str)
{
	int i = 0;
	char *stringcopy;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	stringcopy = malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		stringcopy[i] = str[i];
		i++;
	}
	if (stringcopy == NULL)
	{
		return (NULL);
	}
	return (stringcopy);

}
