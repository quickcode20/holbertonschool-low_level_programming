#include "holberton.h"
/**
*_strstr - locates a substring
*@needle: given substring to search
*@haystack: given string to be searched
*@NULL: substring not found
*Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
