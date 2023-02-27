#include "main.h"
#include <stdio.h>

/**
*print_array - print elements of an array
*@a:array to test
*@n:limit
*/
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
printf("\n");
}
