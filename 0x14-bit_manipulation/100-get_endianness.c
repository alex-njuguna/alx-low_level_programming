#include "main.h"

/**
 * get_endianness - as the bname suggests
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int i;
        char *c;

        i = 1;
        c = (char *)&i;

        return (*c);
}
