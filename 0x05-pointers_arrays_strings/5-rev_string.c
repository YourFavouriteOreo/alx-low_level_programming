#include "holberton.h"
#include "stdio.h"

/**
 * rev_string - Reverse String
 * @s: Pointer to string to be reversed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int first;
	int second;
	char temp;

	first = 0;

	while (*(s + second))
	{
		second++;
	}

	second -= 1;

	while (first < second)
	{
		temp = s[first];
		s[first] = s[second];
		s[second] = temp;
		first++;
		second--;
	}
}
