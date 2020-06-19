#include "holberton.h"
/**
*print_triangle - prints a triangle followed by a new line
*@size: size of the triangle
*Return: nothing
*/
void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		x = 0;
		while (x < size)
		{
			y = x;

			while (y < size - 1)
			{
				_putchar(' ');
				y++;
			}

			z = 0;

			while (z <= x)
			{
				_putchar('#');
				z++;
			}
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}

}

