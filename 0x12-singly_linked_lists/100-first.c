#include <stdio.h>

/**
 * startupfun - Prints a statement before main function is executed
 */
void startupfun(void) __attribute__ ((constructor));

void startupfun(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
