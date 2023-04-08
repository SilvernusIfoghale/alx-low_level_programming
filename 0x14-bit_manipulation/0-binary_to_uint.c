#include "main.h"

/**
 * binary_to_uint - converts a binary number to decimal
 * @b: string of the binary 
 *
 * Return: converted number output
 */
unsigned int binary_to_uint(const char *b)
{
	int temp;
	unsigned int actual_val;

	actual_val = 0;

	if (!b)
		return (0);

	for (temp = 0; b[temp]; temp++)
	{
		if (b[temp] < '0' || b[temp] > '1')
			return (0);
		actual_val = 2 * actual_val + (b[temp] - '0');
	}

	return (actual_val);
}
