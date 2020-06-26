#include "holberton.h"
/**
*_strcmp - compares two strings
*@s1: given string
*@s2: given string
*Return: returns int<0 if s1 is found
*int=0 if s1 matches s2
*int>0 if s1 is greater than s2
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

