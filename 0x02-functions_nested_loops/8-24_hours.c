#include "holberton.h"

/**
 * jack_bauer - print every minute of a day
 * @h1: tens place of hours
 * @h2: ones place of hours
 * @m1: tens place of hours
 * @m2: ones place of hours
 *
 * Prints every minute of a single day
 * Return: 0 (success)
 */

void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;

	for (h1 = 0; h1 <= 2; h1++)
	{
		for (h2 = 0; ((h2 <= 9 && h1 <= 1) || (h2 <= 3 && h1 == 2)); h2++)
		{
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar(h1 + 48);
					_putchar(h2 + 48);
					_putchar(58);
					_putchar(m1 + 48);
					_putchar(m2 + 48);
					_putchar('\n');
				}
			}
		}
	}
}
