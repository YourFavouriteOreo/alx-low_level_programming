#include "holberton.h"
#include "stdio.h"
/**
 * *_strncat - strcat but can maximum use n bytes.
 * @src: Char array to be copied on top of dest
 * @dest: Char array on which src needs to be copied to
 * @n: Maximum number of bytes usable
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int countDest = 0;
	int countSrc = 0;

	while (dest[countDest] != '\0')
	{
		countDest++;
	}

	while (countSrc < n && src[countSrc] != '\0')
	{
		dest[countDest] += src[countSrc];
		countSrc++;
		countDest++;
	}

	dest += '\0';

	return (dest);
}
