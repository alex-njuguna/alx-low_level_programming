#include "main.h"

/**
 * _putchar - print a char
 * @c: test par
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
