#include "holberton.h"
/**
*leet - encodes a string into 1337
*@string: given string
*Return: encoded string
*/
char *leet(char *string)
{
	int i, j;
	char *sa, *sn;

	i = 0;
	sa = "aeotlAEOTL";
	sn = "4307143071";

	while (string[i] != '\0')
	{
		for (j = 0; sa[j] != '\0'; j++)
		{
			if (string[i] == sa[j])
			{
				string[i] = sn[j];
			}
		}
		i++;
	}
	return (string);
}

