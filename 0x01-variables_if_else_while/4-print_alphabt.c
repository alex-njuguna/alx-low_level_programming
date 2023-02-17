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

	for (mychar = 'a'; mychar < 'z'; ++mychar)
		if (mychar != 'e' && mychar != 'q')
			putchar(mychar);
	putchar('\n');
}
