#include "main.h"

/**
 * main - A program that prints Alphabets
 *
 * Return: void
 */
int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
