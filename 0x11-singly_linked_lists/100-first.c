#include <stdio.h>
/* Constructor attribute to execute function before main*/
void start(void) __attribute__((constructor));
/**
 * start - Function that executes before main.
 * Return: void
 */
void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
