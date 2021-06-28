#include <unistd.h>
#include "holberton.h"
/**
 * _puts - prints a string to stdout.
 * @str: value to be evaluated
 * Return: not.
 */
void _puts(char *s)
{
	int l = 0;
	
	while (*(str + l) != '\0')
	{
		_putchar (str[l]);
		l++;
	}
	_putchar ('\n');
}

