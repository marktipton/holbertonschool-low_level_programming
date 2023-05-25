#include <stdio.h>
/**
 *main - the starting point for program execution in c
 *Return: ends the execution of a function
 *Description: displays the size of various types on the computer
 */
int main(void)
{
 
    int intType;
    float floatType;
    char charType;
    long int longintType;
    long long int longlongintType;
    
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of longint: %zu bytes\n", sizeof(longintType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    printf("Size of longlongint: %zu bytes\n", sizeof(longlongintType));
    
    return (0);
}
~


