#include "holberton.h"

/**
*print_alphabet - prints alphabet in lowercase
*
*Return: nothing
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	while (i < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			++x;
		}
			_putchar('\n');
			++i;
	}
}

