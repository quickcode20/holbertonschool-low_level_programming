#include "holberton.h"
/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @string: string to be changed
* Return: uppercase string
*/
char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 97 && string[i] <= 122)
		{
			string[i] = string[i] - 32;
		}
	}
	return (string);
}

