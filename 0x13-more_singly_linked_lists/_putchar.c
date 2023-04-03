#include "lists.h"

/**
 * _putchar- wite a character
 * @c: test parameter
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
