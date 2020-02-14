#include "holberton.h"

/**
 * print_numbers - print numbers
 * @n: number
 *
 * Print the numbers 0-9
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
}
