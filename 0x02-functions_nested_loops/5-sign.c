#include "main.h"

/**
 * print_sign - print sign of an int
 * @n: par to be tested
 * Return: 1, -1, 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
