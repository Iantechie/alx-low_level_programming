#include <stdio.h>
#include "holberton.h"
/**
 * *_strcpy- function that copies a str pointed to by src
 * @dest: value to be evaluated
 * @str:value to be evaluated
 * Return: not
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int l = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
