#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int num, num1;

	for (num = 48; num <= 57; num++)
	{
		for (num1 = num + 1; num1 <= 57; num1++)
		{
			if (num != num1 && num > num1)
			{
				putchar(num);
                       		putchar(num1);

                                if (num == 56 && num1 == 57)
                        	{
                               		break;
                        	}
                        	putchar(',');
                        	putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
