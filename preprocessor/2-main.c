#include <stdio.h>
/**
 *main: prints name of file program is compiled from
 *
 *Return: always 0
 *
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
