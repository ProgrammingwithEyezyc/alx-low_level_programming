#include <stdio.h>

/**
 * main - Entry points
 * Description: Prints the alphabet in lowercase, and then in uppercase
 * Return: Alaways return 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
