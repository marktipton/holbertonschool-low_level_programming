#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return duplicate of string
 *@str: string to be copied
 * Return: NULL if str = NULL or the pointer to the new memory
 */
char *_strdup(char *str)
{
	int i = 0;
	char *stringcopy = NULL;

	while (str[i] != '\0')
	{
		stringcopy[i] = str[i];
		i++;
	}
	stringcopy[i] = '\0';
	stringcopy = malloc((i + 1) * sizeof(char));

	if (stringcopy == NULL)
	{
		return (NULL);
	}
	else
	{
		return (stringcopy);
	}

}
