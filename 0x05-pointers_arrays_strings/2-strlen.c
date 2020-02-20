#include "holberton.h"

/**
 * _strlen - Print length of string
 * @s: array
 *
 * Prints length of string
 * Return: i (Success)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
