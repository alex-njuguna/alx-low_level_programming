#include "main.h"

/**
 * _isupper - chech upper case
 * @c: par to be tested
 * Return: 1 or 0
 */
int _isupper(int c)
{
	char mychar;

	for (mychar = 'A'; mychar <=  'Z'; ++mychar)
	{
		if (c == mychar)
		{
			return (1);
		}
		else
			return (0);
	}
}
