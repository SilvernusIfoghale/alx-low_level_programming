#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character ot print
 *
 * Return: On Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
