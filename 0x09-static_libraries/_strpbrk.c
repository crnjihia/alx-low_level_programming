#include "main.h"

char *_strpbrk(char *s, char *accept) {
    char *a;
    while (*s != '\0') {
        for (a = accept; *a != '\0'; ++a) {
            if (*s == *a) {
                return s;
            }
        }
        ++s;
    }
    return NULL;
}

