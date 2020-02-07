#include <stdio.h>

/**
 * main - entry point
 *
 * Prints alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
