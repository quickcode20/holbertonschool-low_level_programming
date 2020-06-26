#include "holberton.h"
/**
*_strncat - concatenates two strings
*@dest: destination string
*@src: source string
*@n: bytes
*Return: pointer to resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i;

	for (l = 0; dest[l] !=  '\0'; l++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++, l++)
	{
		dest[l] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}

