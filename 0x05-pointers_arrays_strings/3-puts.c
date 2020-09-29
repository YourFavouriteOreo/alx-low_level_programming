#include "holberton.h"
#include "stdio.h"

/**
 * _puts - Print entire string
 * @str: String to be printed
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	while (*(str + i))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
