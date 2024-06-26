#include <stdio.h>

/**
 * main - Entry point
 * Description: Print the sum of even fibonacci numbers un to a fib value
 * not exceeding 4,000,000
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);

	return (0);
}
