#include "holberton.h"

/**
 * print_last_digit - print the last digit
 * @n: current number
 *
 * Prints the last digit of any number
 * Return: 0 (success)
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 1)
	{
		n = n * -1;
	}

	_putchar(n + '0');
	return (n);
}
