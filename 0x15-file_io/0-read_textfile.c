#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This reads the text
 * @filename: the file to be read from
 * @letters: total letters to read
 *
 * Return: w- total number of bytes read and output zero (0) on Fail or NULL
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fh_open;
	ssize_t f_write;
	ssize_t temp;

	fh_open = open(filename, O_RDONLY);
	if (fh_open == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	temp = read(fh_open, buffer, letters);
	f_write = write(STDOUT_FILENO, buffer, temp);

	free(buffer);
	close(fh_open);
	return (f_write);
}
