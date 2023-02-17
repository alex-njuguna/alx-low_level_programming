#include <stdio.h>

/**
 * main - entry point
 *
 * return: 0
 *
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = 48; num2 < 58; num2++)
		{
			for (num3 = 48; num3 < 58; num3++)
			{
				if (num1 < num2 && num2 < num3 && num1 < num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 == 55 && num2 == 56 && num3 == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
