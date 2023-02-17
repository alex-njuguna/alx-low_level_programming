#include <stdio.h>

/**
 * main - Function entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char mychar;

	for (mychar = 'z'; mychar >= 'a'; --mychar)
		putchar(mychar);
	putchar('\n');
	return (0);
}
