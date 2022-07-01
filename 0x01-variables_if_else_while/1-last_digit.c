#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -> assigns random integers
 * Return: 0 for success
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of n is %d and is greater than 5\n", n);
	if (n == 0)
		printf("Last digit of n is %d and is zero\n", n);
	if (n < 6)
		printf("Last digit of n is %d and is less than 6\n", n);
	return (0);
}
