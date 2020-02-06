#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * function for specifying the last digit with of a file
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = abs(n % 10);

	if (abs(n) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}