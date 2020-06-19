#include "holberton.h"
/**
*print_square - prints a square followed by a new line
*@size: size of the square
*Return: nothing
*/
void print_square(int size)
{
	int c, r;

	if (size > 0)

	{
		r = 0;
		while (r < size)
		{
			c = 0;
			while (c < size)
			{
				_putchar('#');
				c++;
			}
			_putchar('\n');
			r++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
