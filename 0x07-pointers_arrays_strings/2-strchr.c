#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: occurrence of the character
 * @s: test string
 * Return: a pointer to the character
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
{
s++;
}
else
{
return (s);
}
}
if (c == '\0')
{
return (s);
}

return (NULL);
}
