#include "holberton.h"
/**
*print_diagonal - draws a diagonal line on the terminal
*@n: number of times character \ should be printed
*Return: nothing
*/
void print_diagonal(int n)
{
	int c , s;
	
	if (n > 0)
	{
			c = 0;
			while (c < n)
			{
				s = 0;
				while (s < c)
				{
					_putchar(' ');
					s++;
				
				}
				_putchar('\\');
				_putchar('\n');
				c++;
			}
	}
	else
	{
		_putchar('\n');
	}
}

