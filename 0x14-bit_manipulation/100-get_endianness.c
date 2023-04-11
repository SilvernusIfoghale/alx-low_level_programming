#include "main.h"

/**
 * get_endianness - checks if a machine is little endianness or big endianness
 *
 * Return: 0 for big endianness  and 1 for little endianness
 */
int get_endianness(void)
{
	unsigned int temp;

	temp = 1;

	char *prt = (char *) &temp;

	return (*ptr);
}
