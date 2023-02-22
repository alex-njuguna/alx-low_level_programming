#include <stdio.h>

/**
 * fib - print 98 fibonnaci
 *@n: 98
 * Return: 0
 */
int fib(int n)
{
	int i, result;
	
	i = 3;
	do {
		result = fib(i - 1) + fib(i - 2);
		return (result);
		i++;
	} while (i < n);

}

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n = 98;

	printf("1, ");
	printf("2, ");
	printf("%d, ", fib(n));
	return (0);
}
