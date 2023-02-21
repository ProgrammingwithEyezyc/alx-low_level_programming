#include <stdio.h>
/**
 * main - code goes in here
 * Description: Print the alphabet in reverse
 * Return: returning 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
