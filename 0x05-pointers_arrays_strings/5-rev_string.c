#include "holberton.h"

/**
 * rev_string - Prints string backwards
 * @s: array
 *
 * Prints string backwards
 * Return: i (Success)
 */

void rev_string(char *s)
{
	int n = 0;
	char temp;
	int i;

	while (s[n] != '\0')
	{
		n++;
	}
	n = n - 1;
	for (i = 0; i <= n; i++, n--)
	{
		temp = s[i];
		s[i] = s[n];
		s[n] = temp;
	}
}
