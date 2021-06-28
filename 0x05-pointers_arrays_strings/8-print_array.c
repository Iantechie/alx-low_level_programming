#include <stdio.h>
#include "holberton.h"
/**
 * print_array -function that prints n elements of an array of integers
 * @a: value to be evaluatedd
 * @n: value to be evaluated
 * Return: not
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
