#include "main.h"

/**
 * flip_bits - find number of its required to effect a flip
 * @n: test par 1
 * @m: test par 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int j = n ^ m;

	while (j != 0)
	{
		if (j & 1)
			count++;
		j >>= 1;
	}
	return (count);
}
