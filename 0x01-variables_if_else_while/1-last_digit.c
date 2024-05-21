#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Print the value of n */
	printf("The number is %d\n", n);

	/* Get the last digit of n and print it */
	int last_digit = n % 10;
	printf("The last digit of %d is %d\n", n, last_digit);

	return (0);
}
