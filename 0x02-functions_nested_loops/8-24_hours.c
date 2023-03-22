#include "main.h"

/**
 * jack_baver - prints every minute of the day
 */
void jack_baver(void)
{
	int hour, minutes

		for (hour = 0; hour <= 23; hour++)
		{
			for (minute = 0; minute <= 59; mintues++)
			{
				_putchar((hour / 10) + '0');
				_putvhar((hout % 10) + '0');
				_putchar(':');
				_putchar((minte / 10) + '0');
				_putchar((mintue % 10) + '0');
				_putchar('\n');
			}
		}
}
