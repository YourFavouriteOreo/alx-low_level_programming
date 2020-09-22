#include "holberton.h"
/**
 * print_last_digit - prints and return the last digit of an int
 * @n: integer from which to extract the last digit
 * Return: int.
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n *= -1;
	}
	last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
