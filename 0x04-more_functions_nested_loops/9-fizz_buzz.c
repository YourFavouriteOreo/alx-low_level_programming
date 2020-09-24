#include "holberton.h"
#include <stdio.h>

/**
 * main - Print 1 to 100 replacing multiples of 3 & 5 with fizz & buzz
 * Return: Void.
 */
int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("%s", "FizzBuzz");
			}
			else
			{
				printf("%s", "Fizz");
			}
		}

		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}
