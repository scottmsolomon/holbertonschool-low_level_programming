#include "holberton.h"

/**
 * _print_rev_recursion - Print a string in reverse
 * @s: A string
 *
 * Prints out a string in reverse
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
