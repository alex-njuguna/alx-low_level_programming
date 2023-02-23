#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: length
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(' ');
			for (j = 0; j <= n; j++)
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
