#include "holberton.h"
#define NULL 0
/**
*_strchr - locates a character in a string
*@c: given character
*@s: given string
*Return: pointer to the first ocurrence of character
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return ('\0');
}

