#include "main.h"

/**
 * flip_bits - counts and initialize bits
 *
 * @n: first number
 * @m: next number
 *
 * Return: number of bits to change
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int temp;

	int ptr_V = 0;

	unsigned long int temp_value;
	unsigned long int flip_bit = n ^ m;

	for (temp = 63; temp >= 0; temp--)
	{
		temp_value = flip_bit >> temp;
		if (temp_value & 1)
			ptr_V++;
	}

	return (ptr_V);
}
