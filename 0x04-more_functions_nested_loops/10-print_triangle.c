#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = size; j >= 0; j--)
			{
				_putchar(' ');
			}
			_putchar('#');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
