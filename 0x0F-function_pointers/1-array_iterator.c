#include "function_pointers.h"

/**
 * array_iterator - iterate through the array
 * @array: test apr
 * @size: size of the array
 * @action:  is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
