#include "main.h"

/**
 * _islower - init func
 *@c: par to be tested
 * Return: 0 or 1
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
