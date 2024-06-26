#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print string statement based on last digit of a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declare variables */
	int n, y;

	/* Generate random number */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10; /* this is a remainder */

	/* Check last digit and print corresponding message */
	if (y > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	}
	else if (y == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, y);
	}
	else if (y < 6 && y != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, y);
	}

	return (0);
}
