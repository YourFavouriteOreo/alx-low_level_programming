#include "holberton.h"
#include "stdio.h"
#include "string.h"

/**
 * print_rev - Print provided string in reverse
 * @s: Pointer to string to be reversed
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}

	while (i != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
