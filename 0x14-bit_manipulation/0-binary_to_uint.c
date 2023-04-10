#include "main.h"

/**
 * binary_to_uint - convert a binary to unsigned int
 * @b: pointer to a string of 0 to 1 characters
 * Return: unsined int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = (result << 1) + (b[i] - '0');
		i++;
	}
	return (result);
}
