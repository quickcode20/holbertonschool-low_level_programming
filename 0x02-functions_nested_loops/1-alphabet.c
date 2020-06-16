#include "holberton.h"

/**
*print_alphabet - prints alphabet in lowercase
*
*Return: nothing
*/
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		++x;
	}
		_putchar('\n');
}

