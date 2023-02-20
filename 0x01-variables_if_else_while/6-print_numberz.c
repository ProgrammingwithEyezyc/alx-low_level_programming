#include <stdio.h>
/**
 * main - code goes in here
 * Return: returning 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
	return (0);

}
