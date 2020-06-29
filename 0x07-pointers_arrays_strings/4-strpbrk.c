#include "holberton.h"
/**
*_strpbrk: searches a string of any of a set of bytes
*@s: given string to search
*@accept: source string
*@NULL: if no such a byte is found
*Return: pointer to the byte in s
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
