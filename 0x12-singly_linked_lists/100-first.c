#include<stdio.h>

/**
 * myStartupFun - constructor to add
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - the juice
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
