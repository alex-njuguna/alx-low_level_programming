#include "main.h"

/**
*reverse_array - reverse an array of ints
*@a:par 1
*@n:par 2
*/
void reverse_array(int *a, int n)
{
int i, c;

for (i = 0; (i < (n - 1) / 2); i++)
{
c = a[i];
a[i] = a[n - 1 - i];
}
}
