#include "holberton.h"

/**
 * _strlen - Count the length of a string
 * @s: String whose value is to be counted
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}
