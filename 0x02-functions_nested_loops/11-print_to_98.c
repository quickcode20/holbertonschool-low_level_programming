#include <stdio.h>
#include "holberton.h"

/**
*print_to_98 - prints all natural numbers from n to 98
*@n: input integer
*Return: nothing
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(" ,");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(" ,");
			}
			n++;
		}
	}
	printf("\n");
}

