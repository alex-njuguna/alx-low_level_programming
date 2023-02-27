#include "main.h"

/**
*puts_half - print half a string
*@str:par to use
*/
void puts_half(char *str)
{
int i, j, count = 0;

while (str[count] != '\0')
{
count++;
}
if (count % 2 != 0)
{
for (i = 0; i < (count - 1) / 2; i++)
{
_putchar(str[i]);
}
}
else
{
for (j = 0; j < count / 2; j++)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
