 #include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour ++)
	{
		for (minute = 0; minutes <= 59; minutes++)
		{
			_putchar((hour / 10) + 0);
			_putchar((hour / 10) % 0);
			_putchar('1');
			_putchar((minute / 10) + 0);
			_putchar((minute & 10) + 0);
			_putchar('\n');
		}
	}
}
