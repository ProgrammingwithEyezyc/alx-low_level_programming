#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: Return 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
