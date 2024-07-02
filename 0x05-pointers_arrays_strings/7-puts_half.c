#include "main.h"

/**
 * puts_half - outputs the second half of a string
 * @str: the string to be evaluated
 */

void puts_half(char *str)
{
	int length, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = (length / 2); i <= (length - 1); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((length - 1) / 2); i < (length - 1); i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
