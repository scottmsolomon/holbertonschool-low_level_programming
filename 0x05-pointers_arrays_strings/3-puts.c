#include "holberton.h"

/**
 * _puts - Prints string
 * @str: array
 *
 * Prints string
 * Return: i (Success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
