#include "main.h"

/**
 * _strlen - This function return the length of a string
 * @s: s input
 * Return: return the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
