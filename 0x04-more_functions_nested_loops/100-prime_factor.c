#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
    long number = 612852475143;
    long factor = 2;
    long largest = 0;

    while (number > 1)
    {
        if (number % factor == 0)
        {
            largest = factor;
            while (number % factor == 0)
            {
                number /= factor;
            }
        }
        factor++;
    }
    
    printf("%ld\n", largest);

    return 0;
}
