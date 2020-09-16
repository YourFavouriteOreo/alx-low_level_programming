#include <stdio.h>
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char preText[] = "Size of a";
    printf("%s %s: %d byte(s)\n",preText,"char",sizeof(char));
    printf("%s %s: %d byte(s)\n",preText,"int",sizeof(int));
    printf("%s %s: %d byte(s)\n",preText,"long int",sizeof(long int));
    printf("%s %s: %d byte(s)\n",preText,"long long int",sizeof(long long int));
    printf("%s %s: %d byte(s)\n",preText,"float",sizeof(float));
    return (0);
}
