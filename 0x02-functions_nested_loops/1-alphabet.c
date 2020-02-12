#include "holberton.h"

/**
 * print_alphabet - print the alphabet
 * @n - letter of the alphabet
 *
 * Prints the alphabet followed by a new line
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');

}
