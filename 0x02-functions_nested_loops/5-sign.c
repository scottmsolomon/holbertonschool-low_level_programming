#include "holberton.h"

/**
 * print_sign - print the sign of the number
 * @n: current number
 *
 * Prints whether the number is zero, positive, or negative
 * Return: 1 if positive, -1 if negative, 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
