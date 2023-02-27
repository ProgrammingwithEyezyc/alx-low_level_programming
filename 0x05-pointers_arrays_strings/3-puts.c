#include "main.h"
/**
 * _puts - This function prints a string follow by a new line
 * @str: string inputs
 * Return: return a string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
