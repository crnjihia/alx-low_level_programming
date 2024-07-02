#include "main.h"

/**
 * rev_string(char *s)- reverses a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	char c;
	int i, j, len;

	len = 0;
	j = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	j = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[j];
		s[j--] = c;
	}
}
