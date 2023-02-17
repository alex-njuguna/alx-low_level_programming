#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char mychar;

	for (mychar = 'a'; mychar <= 'z'; ++mychar)
		putchar(mychar);
	putchar('\n');
	return (0);
}
