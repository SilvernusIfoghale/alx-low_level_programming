#include <stdio.h>
/**
 * main - A program that Prints all possible combinations
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
}
