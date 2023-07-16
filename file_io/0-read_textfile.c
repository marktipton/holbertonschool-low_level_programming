#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads textfile and prints it to stdout
 *
 * @filename: name of file
 * @letters: number of letters to read and print
 * Return: 0 or number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t num_bytes;
	char c;

	num_bytes = 0;
	
	if (filename == NULL)
		return (0);
	
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while (num_bytes < letters && (c = fgetc(fp)) != EOF)
	{
		printf("%c", c);
		num_bytes++;
	}

	fclose(fp);
	return (num_bytes);

}
