#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for writing all numbers between 0 and 100, incl 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char characterX;
	char characterY;

	for (characterX = '0' ; characterX <= '9' ; characterX++)
	{
		for (characterY = '0' ; characterY <= '9' ; characterY++)
		{
			putchar(characterX);
			putchar(characterY);
			if (characterX == '9' && characterY == '9'){
				putchar('\n');
			}
			else {
				putchar(',');
			}
			putchar(' ');
		}
	}
	return (0);
}
