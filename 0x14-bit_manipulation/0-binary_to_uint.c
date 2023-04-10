#include "main.h"

/**
 * binary_to_uint - convert a binary to unsigned int
 * @b: pointer to a string of 0 to 1 characters
 * Return: unsined int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		result << 1;
		if (b[i] == '1')
			result += 1;
	}
	return (result);
}
