#include "holberton.h"

/**
 * swap_int - Swaps the integer values
 * @a: first integer
 * @b: second integer
 *
 * Swaps one integer with another
 * Return 0 Always (Success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
