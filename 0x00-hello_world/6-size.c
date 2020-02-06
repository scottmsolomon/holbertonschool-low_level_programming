#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i;
	double d;
	char c;

	printf("Size of an int is:%lu.\n", (unsigned long)sizeof(i));
	printf("Size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("Size of an c is: %lu.\n", (unsigned long)sizeof(c));

	return (0);

}
