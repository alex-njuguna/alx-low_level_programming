#include "main.h"
#include <stdio.h>

/**
 * multiples_of_3 - check for multiples of 3 and
 * replace them with Fizz
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ")
		else if (i % 3 == 0)
			prinf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
