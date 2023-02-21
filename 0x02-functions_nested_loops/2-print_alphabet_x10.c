#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet x10 times
 * Return: returning 0
 */
void print_alphabet_x10(void)
{
	char i;
	int c = 0;

	while (c <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	c++;
	}

}
