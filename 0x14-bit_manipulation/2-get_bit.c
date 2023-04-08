#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal output
 * @n: search number
 * @index: index of the bit
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int binary_val;

	if (index > 63)
		return (-1);

	binary_val = (n >> index) & 1;

	return (binary_val);
}
