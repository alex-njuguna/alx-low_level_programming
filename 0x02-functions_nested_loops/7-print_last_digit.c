#include "main.h"

/**
 * print_last_digit - print last digit
 * @i: par to be checked
 * Return: 0
 *
 */
int print_last_digit(int i)
{
	int n;

	if (i > 0)
	{
		n = i % 10;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = (i * -1) % 10;
		_putchar(n + '0');
		return (n);
	}
}
