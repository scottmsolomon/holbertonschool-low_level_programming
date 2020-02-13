#include "holberton.h"

/**
 * jack_bauer - print every minute of a day
 *
 * Prints every minute of a single day
 * Return: 0 (success)
 */

void times_table(void)
{
	int r;
	int c;
	int m;
	int n;

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
					n = m % 10;
					m = m / 10;
					_putchar(m + 48);
					_putchar(n + 48);
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
					m = m % 10;
					_putchar(32);
					_putchar(32);
					_putchar(m + 48);
					if (c < 9)
					{
						_putchar(44);
					}
					else if (c == 9)
					{
						_putchar('\n');
					}
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
