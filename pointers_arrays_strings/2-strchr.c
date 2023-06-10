#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - locates a character in a string
 *@s: string in question
 *@c: character to locate
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i = 0;


while (*s != '\0')
{
	if (*s == c)
	{
		return (s);
	}
	i++;
}
if (*s == '\0')
{
	return (NULL);
}
return (0);
}
