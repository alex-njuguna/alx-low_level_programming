#include "main.h"

/**
*puts_half - print half a string
*@str:par to use
*/
void puts_half(char *str)
{
int count = 0;

while (str[count] != '\0')
{
count++;
}
if (count % 2 != 0)
{
for (int i = 0; i < (count - 1) / 2; i++)
{
_putchar(str[i]);
}
}
else
{
for (int i = 0; i < count / 2; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
