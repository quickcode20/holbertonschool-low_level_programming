#include "holberton.h"
#include <stdio.h>
/**
*print_array - prints n elements of an array of integers
*@a : given array
*@n : number of elemnts of the array
*Return: nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}

