#include "holberton.h"
#include "stdio.h"
#include "string.h"

/**
 * print_array - Print array upto n elements
 * @a: Array to be read from
 * @n: Number of elements to be read
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
		i++;
	}
}
