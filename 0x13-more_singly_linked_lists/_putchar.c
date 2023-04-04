#include <unistd.h>

/**
 * _putchar - print out characters
 * @c: character in question
 * Return: characters
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
