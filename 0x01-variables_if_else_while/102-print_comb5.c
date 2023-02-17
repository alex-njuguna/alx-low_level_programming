#include <stdio.h>

/**
 * main - entry point
 *
 * return: 0
 *
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 < 148; num1++)
	{
		for (num2 = 48; num2 < 148; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 == 147 && num2 == 147)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
