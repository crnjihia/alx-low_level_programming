#include <stdio.h>

/**
 * print_array - prints out the elements of an array
 *@n: number of elements of the array
 *@a: array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
