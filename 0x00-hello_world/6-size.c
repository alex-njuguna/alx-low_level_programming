#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int age;
	long int myage;
	long long int _myage;
	float salary;

	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of an int: %ld byte(s)\n", sizeof(age));
	printf("Size of a long int: %ld byte(s)\n", sizeof(myage));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(_myage));
	printf("Size of a float: %ld byte(s)\n", sizeof(salary));

	return (0);
}
