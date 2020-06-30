#include "holberton.h"
#include <stdio.h>
/**
*print_diagsums - prints the sum of the two diagonals
*of a square matrix of integers
*@a:pointer to matrix
*@size: size of matrix
*Return: nothing
*/
void print_diagsums(int *a, int size)
{
	int i, j, rs, ls;

	rs = 0;
	ls = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		ls += a[i];
	}
	for (j = size - 1; j < (size * size) - 1; j += size - 1)
	{
		rs += a[j];
	}
	printf("%d, %d\n", ls, rs);
}

