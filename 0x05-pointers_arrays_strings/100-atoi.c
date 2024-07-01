#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
    int sign = 1;
    unsigned int num = 0;
    int found_num = 0;

    while (*s)
    {
        if (*s == '-' && !found_num)
        {
            sign *= -1;
        }
        if (*s >= '0' && *s <= '9')
        {
            found_num = 1;
            num = num * 10 + (*s - '0');
        }
        else if (found_num)
        {
            break;
        }
        s++;
    }

    return (num * sign);
}

