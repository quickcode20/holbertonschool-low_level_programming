#include "holberton.h"
/**
*_strspn - gets the length of a prefix substring
*@s: given string
*@accept:  pointer to substring
*Return: number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int l, tmp;

	i = 0;
	l = 0;

	while (s[i] != '\0')
	{
		tmp = l;

		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				l++;
			}
			j++;
		}
		if (tmp == l)
		{
			return (l);
		}
		i++;
	}
	return (l);
}

