#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - main function
 * Return: returnn 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("The last digit of %d is %d and is greater than 5", n,lastDigit);
	else if (lastDigit == 0)
		printf("The last digit of %d is %d and is 0", n,lastDigit);
	else if (lastDigit < 6 && lastDigit != 0)
		printf ("The last digit %d is %d and is less than 6 and not 0", n,lastDigit);
	printf("\n");
	
	return 0;
}
