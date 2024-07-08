#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: the pointer to pointer to be set
 * @to: the target string to point to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
