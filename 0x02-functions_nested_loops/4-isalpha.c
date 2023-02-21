#include "main.h"

/**
 * _isalpha - check if character is alphabet
 *@c: par to be tested
 * Return: 1 or 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
