#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words in a string
 *
 * Return: Always 0.
 */
char *cap_string(char *)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
