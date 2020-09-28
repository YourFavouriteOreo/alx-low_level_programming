#include "holberton.h"
#include "stdio.h"

/**
 * puts2 - Print every other character in a string
 * @str: String whose value is to be printed
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	while (*(str + i))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
