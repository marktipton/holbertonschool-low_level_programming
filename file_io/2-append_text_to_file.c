#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text to end of file
 *
 * @filename: file to append to
 * @text_content: text to add to file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int append_file;
	int file_len;
	int write_text;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

        append_file = open(filename, O_WRONLY | O_APPEND);
        if (append_file == -1)
                return (-1);

        file_len = strlen(text_content);

        write_text = write(append_file, text_content, file_len);

        if (write_text == -1)
        {
                close(append_file);
                return (-1);
        }

        return (1);


}
