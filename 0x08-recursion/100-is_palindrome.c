#include "main.h"

/**
 * str_len - helper function to calculate string length recursively
 * @s: test par
 * Return: the length of the string
 */
int str_len(char *s)
{
int length;

if (*s == '\0')
{
return (0);
}
else
{
length = (1 + str_len(s + 1));
return (length);
}
}

/**
 * check_palindrome - check if a string is palindrome recursively
 * @s: test par
 * @start: starting index of the string
 * @end: ending index of the string
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int check_palindrome(char *s, int start, int end)
{
int result;
	
if (start >= end)
{
return (1);
}
else if (s[start] != s[end])
{
return (0);
}
else
{
result = check_palindrome(s, start + 1, end - 1);
return (result);
}
}

/**
 * is_palindrome - determines if a string is a palindrome
 * @s: the string to check
 * Return: 1 if the string is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
int y, length;

length = str_len(s);

if (length <= 1)
{
return (1);
}
else
{
y = check_palindrome(s, 0, length - 1);
return (y);
}
}
