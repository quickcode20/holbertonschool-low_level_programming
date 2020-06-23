#include "holberton.h"
/**
* *_strcpy - copies the string pointed to the buffer
*@dest: destination
*@src: source
*Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, l;

	for (l = 0; src[l] != '\0'; l++)
	{

	}
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
