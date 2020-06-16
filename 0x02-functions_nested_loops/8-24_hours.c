#include "holberton.h"

/**
*jack_bauer - prints every minute of the day
*Return: return nothing
*/
void jack_bauer(void)
{
	int min;

	for (min = 0; min < 24 * 60; min++)
	{
		_putchar('0' + (min / 60) / 10);
		_putchar('0' + (min / 60) % 10);
		_putchar(':');
		_putchar('0' + (min %  60) / 10);
		_putchar('0' + (min %  60) % 10);
		_putchar('\n');
	}
}
