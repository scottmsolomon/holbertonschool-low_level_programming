#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 * @n: inputted number
 *
 * Prints all numbers to 98 starting with inputted number
 * Return: 0 (success)
 */
void print_to_98(int n)
{
	int m;

	for (m = n; m < 98; m++)
	{
		printf("%d, ", m);
	/*	printf("98 \n"); */
	}
	for (m = n; m > 98; m--)
	{
		printf("%d, ", m);
	/*	printf("98 \n"); */
	}
	printf("98\n");
}
