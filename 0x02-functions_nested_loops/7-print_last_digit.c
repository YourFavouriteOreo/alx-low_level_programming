#include "holberton.h"
/**
 * print_last_digit - prints and return the last digit of an int
 * @n: integer from which to extract the last digit
 * Return: Void.
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar(last_digit);
	return (last_digit);
}
