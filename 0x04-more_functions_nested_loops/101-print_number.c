#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
 */
void print_number(int n)
{
    unsigned int num = n;  // Use unsigned int to handle the absolute value

    // Handle negative numbers
    if (n < 0)
    {
        _putchar('-');
        num = -n;  // Convert n to positive
    }

    // Find the highest power of 10 less than or equal to num
    unsigned int divisor = 1;
    while (num / divisor >= 10)
    {
        divisor *= 10;
    }

    // Print each digit
    while (divisor != 0)
    {
        _putchar((num / divisor) % 10 + '0');
        divisor /= 10;
    }
}
