#include "holberton.h"
/**
*swap_int - swap the value of two integers
*@a : given value
*@b : given value
*Return: nothing
*/
void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}

