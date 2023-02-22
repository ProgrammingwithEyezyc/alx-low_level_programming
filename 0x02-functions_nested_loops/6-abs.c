#include "main.h"
/**
 * _abs - computing the absolute value of an integer
 * @c: number to be computed
 * Return: return
 */
int _abs(int c)
{
	if (c < 0)
	{
		int compute;

		compute = c * -1;
		return (compute);
	}
	return (c);
}
