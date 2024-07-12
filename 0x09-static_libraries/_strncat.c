#include "main.h"

char *_strncat(char *dest, char *src, int n) {
    char *start = dest;
    while (*dest) {
        dest++;
    }
    while (n-- && (*dest++ = *src++));
    *dest = '\0';
    return start;
}

