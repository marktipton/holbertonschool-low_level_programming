#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *_isalpha - somethings
 *
 * Return: always 0
 *
 * @c: (integer alphabet lower or upper)
 */
/* betty style doc for function main goes there */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
{
return (1);
}
else
{
return (0);
}
}
