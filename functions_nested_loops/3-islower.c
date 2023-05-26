#include "main.h"
/**
 *_islower - somethings
 *
 * Return: always 0
 *
 * @c: (integer alphabet)
 */
/* betty style doc for function main goes there */
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
