#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: test par
 * Return: int length
 */
int _strlen_recursion(char *s)
{
int result;

if (*s == '\0')
{
return (0);
}
else
{
result = 1 + _strlen_recursion(s + 1);
return (result);
}
}
