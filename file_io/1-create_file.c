#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 *@filename: name of new file
 *@text_content: text of new file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int new_file;
	int file_len;
	int write_text;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (new_file == -1)
		return (-1);

	file_len = strlen(text_content);

	write_text = write(new_file, text_content, file_len);

	if (write_text == -1)
	{
		close(new_file);
		return (-1);
	}

	return (1);

}
