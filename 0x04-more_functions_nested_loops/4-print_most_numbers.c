#include "holberton.h"

/**
 * print_most_numbers - print numbers but 2 and 4
 *
 * Print the numbers 0-1, 3, 5-9
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + 48);
		}
	}
	_putchar('\n');
}
