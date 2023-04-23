#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @tempn: pointer to the number to change
 * @ptr_index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *tempn, unsigned int ptr_index)
{
	if (ptr_index > 63)
		return (-1);

	*tempn = (~(1UL << ptr_index) & *tempn);
	return (1);
}
