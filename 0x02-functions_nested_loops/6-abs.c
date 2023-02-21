#include "main.h"

/**
 * _abs - find abs value of an int
 * @n: par to be tested
 * Return: int
 *
 */
int _abs(int n)
{
	int result;

	if (n <= 0)
	{
		result = n * -1;
		return (result);
	}
	else if (n == 0)
		return (0);
	else
		return (n);
}
