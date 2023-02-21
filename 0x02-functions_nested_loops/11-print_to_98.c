#include "main.h"

/**
 * print_to_98 - print all natural numbers to 98
 * @n: starting point
 * Return: nada
 *
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if ( n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i + '0');
			_putchar(',');
                        _putchar(' ');
		}
	}
	else
		_putchar(n + '0');
	_putchar('\n');
}
