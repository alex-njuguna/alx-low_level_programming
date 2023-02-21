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
			if (hour < 10 && minutes < 10)
			{
				_putchar('0' + hour + ':' + '0' + minutes);
			}
			else
			{
				_putchar(hour + ':' + minutes);
			}
		}
	}
}
