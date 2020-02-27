#include "holberton.h"

/**
 * _puts_recursion - Print a string
 * @s: A string
 *
 * Prints out a string
 * Returns 0
 */

void _print_rev_recursion(char *s)
{
	int n = 0;

	if (s[n] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[n]);
	}
}
