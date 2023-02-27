#include "main.h"

/**
*_strlen - return length of a string
*@s:par to test
*Return: string length
*/

int _strlen(char *s)
{
int i = 0;

while (*(s + i) != '\0')
{
i++;
}
return (i);
}
