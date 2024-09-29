#include <stdio.h>
/**
 * hello - p is a  function that prints from init by the loader before main
 */
void hello(void) __attribute__ ((constructor));
void hello(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
