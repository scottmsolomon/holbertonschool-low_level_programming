#include "holberton.h"

/**
 * times_table  - print the 9s time table
 *
 * Prints all multiplications for all numbers up to 9x9
 * Return: 0 (success)
 */

void times_table(void)
{
	int r, c, m;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			m = r * c;
			if (c != 0)
			{
				if (m >= 10)
				{
					_putchar(32);
					_putchar((m / 10) + 48);
					_putchar((m % 10) + 48);
				}
				else
				{
					_putchar(32);
					_putchar(32);
					_putchar((m % 10) + 48);
				}
				if (c < 9)
				{
					_putchar(44);
				}
				else if (c == 9)
				{
					_putchar('\n');
				}
			}
			else
			{
				_putchar(m + 48);
				_putchar(44);
			}
		}
	}
}
