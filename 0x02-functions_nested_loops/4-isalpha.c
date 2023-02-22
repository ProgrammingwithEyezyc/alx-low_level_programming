#include "main.h"
/**
 * _isalpha - This checks for alphabetic character
 * @c: The character to be checked
 * Return: return 1 and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
