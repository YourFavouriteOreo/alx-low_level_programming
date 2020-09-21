#include "holberton.h"
#include "string.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	char holberton[] = "Holberton";
	unsigned long int i;

	for (i = 0; i < strlen(holberton); i++)
	{
		_putchar(holberton[i]);
	}
	print_alphabet();
	_putchar('\n');
	return (0);
}
