#include "holberton.h"

/**
*print_last_digit - print last digit
*@n: input number
*Return: returns the value of the last digit
*/

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
		ld = ld * (-1);
	_putchar (ld + '0');
	return (ld);
}

