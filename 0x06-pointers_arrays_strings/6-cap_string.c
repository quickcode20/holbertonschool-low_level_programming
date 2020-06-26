#include "holberton.h"
/**
*cap_string - capitalizes words on a string
*@string: string to convert
*Return: converted string
*/
char *cap_string(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[0] >= 'a' && string[0] <= 'z')
		{
			string[0] = string[0] - 32;
		}
		if (string[i - 1] == ' ' && (string[i] >= 'a' && string[i] <= 'z'))
		{
			string[i] = string[i] - 32;
		}

		if (string[i] == '.' && (string[i + 1] >= 'a' && string[i + 1] <= 'z'))
		{
			string[i + 1] = string[i + 1] - 32;
		}

		if (string[i] == '\t' && (string[i + 1] >= 'a' && string[i + 1] <= 'z'))
		{
			string[i + 1] = string[i + 1] - 32;
		}

		if (string[i] == '\n' && (string[i + 1] >= 'a' && string[i + 1] <= 'z'))
		{
			string[i + 1] = string[i + 1] - 32;
		}
	}
	return (string);
}

