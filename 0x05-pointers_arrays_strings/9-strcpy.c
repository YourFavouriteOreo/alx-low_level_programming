#include "holberton.h"
#include "string.h"

/**
 * *_strcpy - copies string pointed to by src
 * @dest: character pointer
 * @src: character source
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int max;
	int i;

	max = strlen(src);
	max += 1;

	for (i = 0; i < max; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
