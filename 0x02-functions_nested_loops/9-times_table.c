#include "holberton.h"
/**
*times_table - prints the 9 times table, starting with 0
*Return: 0
*/
void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x * y >= 10)
				_putchar('0' + x * y / 10);
			else if (y)
				_putchar(' ');
				_putchar('0' + x * y % 10);
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}

