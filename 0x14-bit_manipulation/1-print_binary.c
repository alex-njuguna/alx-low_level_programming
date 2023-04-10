#include "main.h"

/**
 * print_binary - convert number to binary
 * @n: test parameter
 */

#include <stdio.h>

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
	print_binary(n >> 1);
	}

	_putchar((n & 1) ? '1' : '0');
}

