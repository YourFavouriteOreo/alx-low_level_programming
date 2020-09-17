#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for writing entire base10 single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char integer;

	for (integer = '0' ; integer <= '9' ; integer++)
	{
		putchar(integer);
		if (integer != '9')
		{
			putchar(',');
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
