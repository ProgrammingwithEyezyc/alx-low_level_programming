#include <stdio.h>

/**
 * main - Entry Point
 * Description: Prints the sizes of various types of data
 * Return: Always return 0.
 */

int main(void)
{
	printf("Size of the char: %zu byte(s)\n", sizeof(char));
	printf("Size of the int: %zu byte(s)\n", sizeof(int));
	printf("Size of the long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of the long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of the float: %zu byte(s)\n", sizeof(float));
	return (0);
}
