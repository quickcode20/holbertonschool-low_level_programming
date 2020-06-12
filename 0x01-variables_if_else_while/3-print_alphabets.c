#include <stdio.h>
/**
*main - 2-print_alphabet.c
*Return: 0
*/
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; ++x)
	{
	putchar(x);
	}
	for (x = 'A' ; x <= 'Z' ; ++x)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}

