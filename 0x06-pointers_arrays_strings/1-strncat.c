#include "main.h"

/**
 * _strncat - join two strings
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
continue;
}
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
