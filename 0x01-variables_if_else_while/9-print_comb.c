#include <stdio.h>
/**
*main - 2-print_alphabet.c
*Return: 0
*/
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
		++x;
	}
	putchar('\n');
	return (0);
}

