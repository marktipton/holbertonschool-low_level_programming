#include <stdio.h>
/**
 *main - the starting point for program execution in c
 *Return: ends the execution of a function
 *Description: displays the size of various types on the computer
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
