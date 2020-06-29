#include "holberton.h"
/**
*_strstr - locates a substring
*@needle: given substring to search
*@haystack: given string to be searched
*Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
int x, y, z;

	x = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[x] != '\0')
	{
		z = x;
		y = 0;

		while (needle[y] == haystack[x] && haystack[x] != '\0')
		{
			x++;
			y++;

			if (needle[y] == '\0')
			{
				return (haystack + z);
			}
		}
		x = z + 1;
	}
	return ('\0');
}

