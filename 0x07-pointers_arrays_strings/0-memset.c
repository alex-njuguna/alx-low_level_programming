#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @n: unsigned int
 * @s: char pointer
 * @b: char
 * Return: a pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}

return (s);
}
