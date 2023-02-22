#include "main.h"
/**
 * times_table - this will print the 9 times table
 * Return: returning times table
 */
void times_table(void)
{
	int row, col, num;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 0; col <= 9; col++)
		{
			num = row * col;
			if ((num / 10) > 0)
			{
				_putchar((num / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((num % 10) + '0');

			if (row < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
