#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme
 * Return: Always 0
 */
int main(void)
{
    int sum = 0;
    char password[100];
    int index = 0;

    srand(time(0));

    while (sum < 2772)
    {
        int rand_char = rand() % 94 + 33; // Generates a random printable ASCII character
        if (sum + rand_char > 2772)
            break;
        password[index++] = rand_char;
        sum += rand_char;
    }
    password[index++] = 2772 - sum;
    password[index] = '\0';

    printf("%s", password);

    return (0);
}

