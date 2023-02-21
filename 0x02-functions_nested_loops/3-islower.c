#include "main.h"
/**
 *_islower - this checks for lower case letter
 *@c: The character is to be checked
 * Return: return 1 for lowercase character and 0 for anything
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
