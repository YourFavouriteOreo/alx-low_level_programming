#include "holberton.h"
#include "stdio.h"

/**
 * _strlen - Count the length of a string
 * @s: String whose value is to be counted
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
