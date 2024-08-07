#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src to dest
 * @src: strig to be copied
 * @dest: pointer to the buffer in which we copy src
 * Return: the point to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
