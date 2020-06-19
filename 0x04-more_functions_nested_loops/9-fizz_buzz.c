#include <stdio.h>
/**
*main - prints the numbers from 1 to 100
*For multiples of 3  print Fizz insted the number
*For multiples of 5 print Buzz
*For number with are multiples of both 3 and 5 print FizzBuzz
*Return: 0
*/

int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0 || c % 5 == 0 || c % 15 == 0)
		{
			if (c % 3 == 0 && c % 15 != 0)
			{
				printf("Fizz");
			}
			else if (c % 5 == 0 && c % 15 != 0)
			{
				printf("Buzz");
			}
			else if (c % 15 == 0)
			{
				printf("FizzBuzz");
			}
		}
		else
		{
			printf("%d", c);
		}
		if (c < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

