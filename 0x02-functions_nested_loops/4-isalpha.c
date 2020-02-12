#include "holberton.h"

/**
 * _isalpha - return 1 is letter
 * @c: letter of the alphabet or symbol
 *
 * Prints 1 if c is a letter, 0 otherwise
 * Return: 1 if letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
