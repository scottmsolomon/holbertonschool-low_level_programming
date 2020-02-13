#include "holberton.h"

/**
 * _isupper - reflects upper case
 * @c: letter
 *
 * Tells whether a letter is upper or lower
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c > 90 || c < 65)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
