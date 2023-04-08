#include "main.h"

/**
 * print_binary - binary of a decimal 
 * @n:  print in binary
 */
void print_binary(unsigned long int n)
{
	int temp, val = 0;
	unsigned long int current;

	for (temp = 63; temp >= 0; temp--)
	{
		current = n >> temp;

		if (current & 1)
		{
			_putchar('1');
			val++;
		}
		else if (val)
			_putchar('0');
	}
	if (!val)
		_putchar('0');
}
