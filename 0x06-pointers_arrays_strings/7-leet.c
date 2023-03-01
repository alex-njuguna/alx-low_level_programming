#include "main.h"

/**
* leet - encode string to digits
* @s: par
*Return: char
*/
char *leet(char *s)
{
char *str1 = "aAeEoOtTlL";
char *str2 = "4433007711";
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j <= 9; j++)
{
if (str1[j] == s[i])
{
s[i] == str2[j];
}
}
}
return (s);
}
