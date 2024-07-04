/* 0-strcat.c */
#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *d = dest;

    // Move d to the end of dest
    while (*d)
        d++;

    // Copy src to dest
    while (*src)
        *d++ = *src++;

    // Null-terminate the result
    *d = '\0';

    return dest;
}

