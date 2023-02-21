#include "main.h"
#include <stdio.h>

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
			printf("%d, ", i);
			if (i == 98)
				break;
		}
	}
	else if ( n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
			if (i == 98)
				break;
		}
	}
	else
		printf("%d",n);
	_putchar('\n');
}
