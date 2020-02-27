#include "holberton.h"

/**
 * _puts_recursion - Print a string
 * @s: A string
 *
 * Prints out a string
 * Returns 0
 */

void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] != '\0')
	{
		_putchar(s[n]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
