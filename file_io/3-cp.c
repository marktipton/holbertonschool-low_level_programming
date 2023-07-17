#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - copies contents of one file into another
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	char buffer[1024];
	int num_bytes;

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

file_from = open(argv[1], O_RDONLY);

if (file_from == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

if (file_to == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

num_bytes = read(file_from, buffer, sizeof(buffer));
while ((num_bytes = read(file_from, buffer, sizeof(buffer))) > 0)
{
	if (write(file_to, buffer, num_bytes) != num_bytes)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

}

if (num_bytes == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

if (close(file_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
if (close(file_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

return (0);


}
