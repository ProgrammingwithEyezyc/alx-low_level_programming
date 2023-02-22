#include "main.h"
/**
 * print_last_digit - This function print last digit of a number
 * @n: The character to be checked
 * Return: returning the last digit
 */
int print_last_digit(int n)
{
	int lastNum = n % 10;

	if (lastNum < 0)
	{
		lastNum = lastNum * -1;
	}
	_putchar(lastNum + '0');
	return (lastNum);
}
