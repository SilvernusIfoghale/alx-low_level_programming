#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_temp_update(char *file);
void close_file(int file_node);

/**
 * create_temp_update - Allocates 1024 bytes for a temp_update.
 * @file: The name of the file temp_update is storing chars for.
 *
 * Return: A pointer to the newly-allocated temp_update.
 */
char *create_temp_update(char *file)
{
	char *temp_update;

	temp_update = malloc(sizeof(char) * 1024);

	if (temp_update == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (temp_update);
}

/**
 * close_file - Closes file descriptors.
 * @file_node: The file descriptor to be closed.
 */
void close_file(int file_node)
{
	int c;

	c = close(file_node);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_node %d\n", file_node);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *temp_update;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	temp_update = create_temp_update(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, temp_update, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(temp_update);
			exit(98);
		}

		w = write(to, temp_update, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(temp_update);
			exit(99);
		}

		r = read(from, temp_update, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(temp_update);
	close_file(from);
	close_file(to);

	return (0);
}
