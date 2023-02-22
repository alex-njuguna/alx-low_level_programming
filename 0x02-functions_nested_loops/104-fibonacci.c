#include "main.h"
#include <stdio.h>

/**
 * fibonacci3 - print 98 fibonnaci
 * @n: 98
 * Return: 0
 */
void fibonacci3(int n)
{
	int result;

	if ( n == 1)
		printf("1\n");
	else if (n == 2)
		printf("2\n");
	else:
		result = ((fibonacci3(n - 1)) + fibonacci3(n - 2));
		printf("%d\n", result);
}
