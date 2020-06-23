#include "holberton.h"
/**
*int _strlen - returns the length of a string
*
*Return: nothing
*/
int _strlen(char *s)
{
	int x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

