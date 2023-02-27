#include "main.h"

/**
*puts2 - print all characters in a str
@str: test par
*/
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
