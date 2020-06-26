#include "holberton.h"
/**
*rot13 - encode string using rot13
*@string: string to encode
*Return: encoded string
*/
char *rot13(char *string)
{
	int i, j;
	char *rot1;
	char *rot2;

	rot1 = "abcdefghijklmABCDEFGHIJKLM";
	rot2 = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; rot1[j] != '\0'; j++)
		{
			if (string[i] == rot1[j])
			{
				string[i] = rot2[j];
			}
			else if (string[i] == rot2[j])
			{
				string[i] = rot1[j];
			}
		}
	}
	return (string);
}
