#include "holberton.h"

/**
*_islower - checks the lowercase character
*@c: given char
*Return: return 1 if it's lowercase, 0 if it is not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
