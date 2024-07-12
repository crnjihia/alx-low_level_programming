#include "main.h"

char *_strcat(char *dest, char *src) {
    char *start = dest;
    while (*dest) {
        dest++;
    }
    while ((*dest++ = *src++));
    return start;
}

