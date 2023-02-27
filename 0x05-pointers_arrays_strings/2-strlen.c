#include "main.h"

/**
 * _strlen - This function return the length of a string
 * @s: s input
 * Return: return the string
 */

int _strlen(char *s)
{
	int i = 0;
	int sum = 0;
	char temp = s[0];

	while (temp != '\0')
	{
		sum++;
		temp = s[i++];
	}
	return (sum);
}
