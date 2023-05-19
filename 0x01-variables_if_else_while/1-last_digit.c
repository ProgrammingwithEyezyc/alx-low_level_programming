#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Prints last number
 * Return: Always return 0
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("The last digit of %d is %d and is greater than 5\n", n, n);
	else if (n == 0)
		printf("The last digit of %d is %d and is 0\n", n, n);
	else
		printf("THe last digit of %d is %d and is less than 6 and not 0\n", n, n);
	return (0);
}
