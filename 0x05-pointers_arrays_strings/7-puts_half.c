#include "holberton.h"
/**
*puts_half - prints half of a string
*@str: given value
*Return: nothing
*/
void puts_half(char *str)
{
	int i, l, hl;

	for (l = 0; str[l] != '\0'; l++)
	{

	}
	if (l % 2 != 0)
	{
		hl = (l / 2) + 1;
	}
	else
	{
		hl = l / 2;
	}
	for (i = hl; i < l ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

