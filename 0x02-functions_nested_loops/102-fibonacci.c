#include <stdio.h>

/**
 * main - print 98 fibonnaci
 *
 * Return: 0
 */
int main(void)
{

int i;
int t1 = 1, t2 = 2, nextTerm;

nextTerm = t1 + t2;
printf("%d, %d, ", t1, t2);
for (i = 3; i <= 50; ++i)
{
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
}
printf("\n");
return (0);
}
