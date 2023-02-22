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
for (i = 3; i <= 98; i++)
{
	t1 = t2;
	t2 = nextTerm;
	nextTerm = t1 + t2;
	if (nextTerm > 4000000 && nextTerm % 2 == 0)
	{
		nextTerm += nextTerm;
	}
        printf("%d, ", nextTerm + 2);
}

return (0);
}
