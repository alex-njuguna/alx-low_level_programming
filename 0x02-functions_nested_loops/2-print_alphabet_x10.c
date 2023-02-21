#include "main.h"

/**
 * print_alphabet_x10 - function init
 *
 * Return: nada
 *
 */
void print_alphabet_x10(void)
{
	char mychar;
	int i = 0;

	do {
		for (mychar = 'a'; mychar <= 'z'; ++mychar)
		{
			_putchar(mychar);
		}
		_putchar('\n');
		i++;
	} while (i < 10);
}
