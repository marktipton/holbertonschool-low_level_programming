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
	char *stringcopy;

	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	stringcopy = malloc(i * sizeof(char));
	free(stringcopy);
	
	if (stringcopy == NULL)
	{
		return (NULL);
	}
	else
	{
		return (stringcopy);
	}

}
