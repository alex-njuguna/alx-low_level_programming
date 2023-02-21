#include "main.h"

/**
 * print_alphabet - fucntion initialization
 *
 * Return: nada
 *
 */
void print_alphabet(void)
{
	char mychar;

	for (mychar = 'a'; mychar <= 'z'; ++mychar)
	{
		_putchar(mychar);
	}
	_putchar('\n');
}
