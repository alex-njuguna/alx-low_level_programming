#include "main.h"
#include <stdio.h>

/**
 * fibonacci3 - print 98 fibonnaci
 *@n: 98
 * Return: 0
 */
void fibonacci3(int n)
{
	int result;

	printf("1\n");
	printf("2\n");
	for (n = 3; n <= 98; n++)
	{
		result = ((fibonacci3(n - 1)) + (fibonacci3(n -2)));
		printf("%d\n", result);
	}

}
