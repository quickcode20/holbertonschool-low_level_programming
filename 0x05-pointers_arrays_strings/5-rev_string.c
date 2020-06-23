#include "holberton.h"
/**
*rev_string - reverses a string
*@s: given value
*Return: nothing
*/
void rev_string(char *s)
{
	int leng, count, str;

	leng = 0;
	while (s[leng + 1] != 0)
	{
		leng++;
	}
	for (count = 0; count <= leng / 2; count++)
	{
		str = s[count];
		s[count] = s[leng - count];
		s[leng - count] = str;
	}
}

