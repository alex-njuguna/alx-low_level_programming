#include "main.h"

/**
* leet - encode string to digits
* @str: par
*Return: char
*/
char *leet(char *str)
{
char *str1[] = "aAeEoOtTlL";
char *str2[] = "4433007711";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j <= 9; j++)
{
if (str1[j] == str[i])
{
str[i] == str2[j];
}
}
}
return (str);
}
