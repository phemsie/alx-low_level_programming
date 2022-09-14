#include "main.h"
/**
 * jack_bauer - function that prints every minutes of the day of Jack Bauer
 * n from 00.00 to 23.59 minutes loop count minutes, while hour llop count hr
 * and resets minutes
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder = 0;
	int minutes_remainder = 0;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	minutes_remaimder = minutes % 10;
	hours_remainder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_remainder + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(minutes_remainder + '0');
	minutes++;
	_putchar('\n');
	}
	hours++
	minutes = 0;
	}
}
