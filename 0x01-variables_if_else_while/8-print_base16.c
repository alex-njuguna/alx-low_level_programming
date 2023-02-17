#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int num;
	char mychar;

	for (num = 48; num < 58; num++)
		putchar(num);
	for (mychar = 'a'; mychar <= 'f'; ++mychar)
		putchar(mychar);
	putchar('\n');
	return (0);
}
