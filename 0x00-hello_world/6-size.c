#include <stdio.h>
/**
 * main - initiates the programmme
 *
 * Description: prints the size of various types
 * Return: 0 if properly exited, otherwise non-zero
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of float; %d byte(s)\n", sizeof(float));
	return (0);
}
