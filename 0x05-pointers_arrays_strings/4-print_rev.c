#include "holberton.h"

/**
 * print_rev - Prints string backwards
 * @s: array
 *
 * Prints string backwards
 * Return: i (Success)
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
