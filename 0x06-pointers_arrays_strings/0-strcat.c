#include "holberton.h"
/**
*_strcat - concatenates two strings
*@dest: string to be added
*@src: string to add to *dest
*Return: result string dest
*/
char *_strcat(char *dest, char *src)
{

	int leng;

	leng = 0;

	while (dest[leng] != '\0')
	{
		leng++;
	}

	while (*src != '\0')
	{
		dest[leng++] = *src;
		src++;
	}
	dest[leng] = '\0';
	return (dest);
}

