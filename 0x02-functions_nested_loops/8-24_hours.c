#include "main.h"

/**
 * jack_bauer - write every minute-day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, y;

	i = 0;

	while (i < 24)
	{
		y = 0;
		while (y < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
			y++;
		}
		i++;
	}
}
