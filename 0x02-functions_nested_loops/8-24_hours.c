#include "main.h"

/**
 * jack_bauer - print mins
 * 
 * Return: nada
 *
 */
void jack_bauer(void)
{
	int minutes, hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (minutes = 0; minutes < 61; minutes++)
		{
			_putchar(hour / 10);
			_putchar(hour % 10);
			_putchar(':');
			_putchar(minutes / 10);
			_putchar(minutes % 10);
		}
	}
}
