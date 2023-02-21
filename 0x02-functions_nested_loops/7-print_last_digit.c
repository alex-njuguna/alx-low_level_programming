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

	n = i % 10;
	_putchar(n + '0');
	return (n);
}
