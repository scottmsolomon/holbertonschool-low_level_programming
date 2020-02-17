#include "holberton.h"

/**
 * print_most_numbers - print numbers but 2 and 4
 *
 * Print the numbers 0-1, 3, 5-9
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int n;
	int m;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 10)
			{
				_putchar(n + 48);
			}
			else
			{
				
			}
		}
	_putchar('\n');
	}
}
