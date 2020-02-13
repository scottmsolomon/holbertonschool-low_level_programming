#include "holberton.h"

/**
 * _isdigit - prints whether it's a number
 * @c: character in question
 *
 * Tells whether a character is a number
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c > 57 || c < 48)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
