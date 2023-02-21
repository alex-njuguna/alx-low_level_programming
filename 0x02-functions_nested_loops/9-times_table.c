#include "main.h"

/**
 * times_table - multiplication table
 *
 * Return: nada
 *
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			_putchar(product);
			_putchar(',');
			_putchar(' ');
		}
	}
}
