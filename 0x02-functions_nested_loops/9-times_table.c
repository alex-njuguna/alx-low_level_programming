#include "main.h"
#include "stdio.h"

/**
 * times_table - multiplication table
 *
 * Return: nada
 *
 */
void times_table(void)
{
	int i, j, product;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			product = i * j;
			printf("%d", product);
			_putchar(',');
			_putchar(' ');
		}
	}
}
