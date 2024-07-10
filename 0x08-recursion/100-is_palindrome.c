#include "main.h"

int _strlen_recursion(char *s);
int _is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    if (len == 0)
        return 1;
    return _is_palindrome_helper(s, 0, len - 1);
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + _strlen_recursion(s + 1);
}

/**
 * _is_palindrome_helper - Helper function to check for palindrome.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _is_palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;
    return _is_palindrome_helper(s, start + 1, end - 1);
}

