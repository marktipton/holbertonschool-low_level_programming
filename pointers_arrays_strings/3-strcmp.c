#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 *@s1: string compare 1
 *
 *@s2: string compare 2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] == s2[i])
{
	i++;
}
/*if ((s1[i] + '0') < (s2[i] + '0'))
{
	return ((s1[i] + '0') - (s2[i] + '0'));
}
if ((s1[i] + '0') > (s2[i] + '0'))
{
	return ((s1[i] + '0') - (s2[i] + '0'));
}
else
{*/
	return ((s1[i] + '0') - (s2[i] + '0'));

}
