#include <stdio.h>
/**
*main - 2-print_alphabet.c
*Return: 0
*/
int main(void)
{
	int x, y;

	for (y = '0' ; y <= '9' ; ++y)
	{
		for (x = '0' ; x <= '9'; ++x)
		{
			putchar(y);
			putchar(x);
		if (x == '9' && y == '9')
		{
		continue;
		}
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

