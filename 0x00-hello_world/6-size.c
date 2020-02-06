#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char c;
	int i;
	long int l;
	long long int m;
	float f;

	printf("Size of a char: %lu.\n", sizeof(c));
	printf("Size of an int: %lu.\n", sizeof(i));
	printf("Size of a long int is: %lu.\n", sizeof(l));
	printf("Size of a long long int: %lu.\n", sizeof(m));
	printf("Size of a float: %lu.\n", sizeof(f));

	return (0);

}
