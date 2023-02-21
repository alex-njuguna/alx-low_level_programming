#include "main.h"

/**
 * _abs - find abs value of an int
 * @n: par to be tested
 * Return: int
 *
 */
int _abs(int n)
{
	if (n <= 0)
	{
		n * -1;
		return (n);
	}
	else if (n == 0)
		return (0);
	else
		return (n);
}
