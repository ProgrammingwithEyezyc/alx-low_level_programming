#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet x10 followed by a new line
 */

void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++
		}
		count++;
		_putchar('\n');
	}
}

