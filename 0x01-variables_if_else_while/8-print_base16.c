#include <stdio.h>
/**
*main - 2-print_alphabet.c
*Return: 0
*/
int main(void)
{
	int i = 0;
	char x = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		++i;
	}
	while (x <= 'f')
	{
		putchar(x);
		++x;
	}
	putchar('\n');
	return (0);
}

