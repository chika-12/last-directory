#include "lists.h"
/**
 * myCleanupFun - function that prints something before
 * the main function is executed.
 */
void myCleanupFun(void) __attribute__ ((constructor));

void myCleanupFun(void)
{
	printf("You're beat! and yet, must allow,\n");
	printf("I bore my house upon my back!\n");
}
