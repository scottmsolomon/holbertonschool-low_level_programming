#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet
 * @n - letter of the alphabet
 * @m - cycle of for loop
 *
 * Prints the alphabet followed by a new line for a total of 10 times
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char n;
	char m;

	for (m = 0; m <= 9; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}
