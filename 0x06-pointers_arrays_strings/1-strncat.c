/* 1-strncat.c */
#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to be used from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    char *d = dest;

    // Move d to the end of dest
    while (*d)
        d++;

    // Copy at most n bytes from src to dest
    while (n-- && *src)
        *d++ = *src++;

    // Null-terminate the result
    *d = '\0';

    return dest;
}

