#include <stdio.h>

/**
 * main - Entry point for writing all numbers between 0 and 100,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int characterX;
	int characterY;

	for (characterX = 0; characterX <= 9; characterX++)
	{
		for (characterY = 0; characterY <= 9; characterY++)
		{
			putchar(characterX + '0');
			putchar(characterY + '0');
			if (characterX == 9 && characterY == 9)
			{
			break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
