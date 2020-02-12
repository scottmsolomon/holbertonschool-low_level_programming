#include "holberton.h"

/**
 * _abs - print the absolute value of a number
 * @n: current number
 *
 * Prints the distance a number is away from zero
 * Return: 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
	{
		return (n);
	}
}
