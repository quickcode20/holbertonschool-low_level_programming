#include "holberton.h"
/**
*reverse_array - reverses the content of an array of integers
*@a: array of integers
*@n: number of elements of the array
*Return: nothing
*/
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n; i++, n--)
	{
		tmp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = tmp;
	}
}

