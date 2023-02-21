#include "main.h"

/**
 * _abs - computes the absolute vaule
 * @c: The number to be computed
 *
 * Return: Absolute value of number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
