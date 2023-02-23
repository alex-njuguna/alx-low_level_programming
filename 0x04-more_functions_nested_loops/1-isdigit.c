#include "main.h"

/**
 * _isdigit - check if a number is a digit
 * @c: par to test
 * Return: 1 0r 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
