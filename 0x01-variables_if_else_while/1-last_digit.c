#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Calculate the last digit */
	last_digit = n % 10;

	/* Print the required message */
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d \n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d \n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d \n", n, last_digit);
	}

	return (0);
}
