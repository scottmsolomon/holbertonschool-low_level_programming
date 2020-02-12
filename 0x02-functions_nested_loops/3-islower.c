#include "holberton.h"

/**
 * _islower - checks for lowercase letters
 * @c: letter of the alphabet
 *
 * Prints 1 if c is lowercase, 0 otherise
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c <= 'z')
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	return (0);
}
