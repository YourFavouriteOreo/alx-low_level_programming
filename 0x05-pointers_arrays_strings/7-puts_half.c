#include "holberton.h"
#include "stdio.h"
#include "string.h"

/**
 * puts_half - Print second half of a string
 * @str: String whose value is to be printed
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;

	i = strlen(str);

	if (i % 2 == 1)
	{
		i = (i - 1) / 2;
	}
	else
	{
		i /= 2;
	}

	while (*(str + i))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
