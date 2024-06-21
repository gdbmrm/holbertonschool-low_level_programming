#include "main.h"
/*
 *
 *
 *
 */

void jack_bauer(void)
{
	int heures;
	int minutes = 0;
	int minute = 0;

	for (heures = 0; heures <= 23; heures++)
	{
		while (minutes < 60)
		{
			_putchar('0' + heures);
			_putchar(':');
			_putchar('0' + minute);
			_putchar('0' + minutes);
			minutes++;
			_putchar('\n');
		}
	minute++;
	}

}
