#include "holberton.h"

/**
 * print_last_digit - prints and return the last digit of an int
 * @n: integer from which to extract the last digit
 *
 * Return: Last digit value.
 */

int print_last_digit(int n)
{
	int retval;

	if (n < 0)
	{
		n *= -1;
	}
	retval = n % 10;
	_putchar(retval + '0');
	return (retval);
}
