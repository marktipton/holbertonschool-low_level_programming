#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int x = 0;

while (x < 100)
{
	if ((x % 3) && (x % 5))
	{
		printf("FizzBuzz ");
	}
	else if (x % 3)
	{
		printf("Fizz ");
	}
	else if (x % 5)
	{
		printf("Buzz ");
	}
	else
	{
		printf("%d ", x);
	}
	x++;
}
return (0);
}
