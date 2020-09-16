#include <stdio.h>
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char preTex[] = "Size of a";

	printf("%s %s: %d byte(s)\n", preTex, "char", sizeof(char));
	printf("%s %s: %d byte(s)\n", preTex, "int", sizeof(int));
	printf("%s %s: %d byte(s)\n", preTex, "long int", sizeof(long int));
	printf("%s %s: %d byte(s)\n", preTex, "long long int", sizeof(long long int));
	printf("%s %s: %d byte(s)\n", preTex, "float", sizeof(float));
	return (0);
}
