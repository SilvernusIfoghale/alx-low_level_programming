#include "main.h"

/**
 * create_file - Creates a File, if not already existing.
 * @filename: Points to the filename created.
 * @text_content: Pointer to write into a file
 *
 * Return: On fails return -1 else return 1.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fh_open, f_write, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			len++;
	}

	fh_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	f_write = write(fh_open, text_content, lenght);

	if (fh_open == -1 || f_write == -1)
		return (-1);

	close(fh_open);

	return (1);
}
