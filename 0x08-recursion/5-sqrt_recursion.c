#include "main.h"

int _sqrt_helper(int n, int start);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Helper function to find the square root.
 * @n: The number to find the square root of.
 * @start: The starting point for checking.
 *
 * Return: The square root, or -1 if not found.
 */
int _sqrt_helper(int n, int start)
{
    if (start * start > n)
        return (-1);
    if (start * start == n)
        return (start);
    return (_sqrt_helper(n, start + 1));
}
