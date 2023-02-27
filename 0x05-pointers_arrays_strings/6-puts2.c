#include "main.h"

/**
*puts2 - print all characters in a str
@str: test par
*/
void puts2(char *str)
{
int length = (sizeof(str) / sizeof(str[0])) - 1;

for (int i = 0; i < length; i++)
{
_putchar(str[i]);
_putchar('\n');
}
}
