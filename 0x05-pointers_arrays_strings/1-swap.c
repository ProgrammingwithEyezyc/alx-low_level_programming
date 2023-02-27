#include "main.h"

/**
 * swap_int - This function swap the value of two integer
 * @a: swap value with b
 * @b: swap value with a
 * Return: Return swapped value
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
