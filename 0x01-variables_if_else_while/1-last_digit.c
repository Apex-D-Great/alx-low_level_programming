#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -> assigns random integers
 * Return: 0 for success
 */

int main(void)
{
	int n, x;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	if (n == 0)
		printf("Last digit of %d is %d and is zero\n", n, x);
	if (n < 6)
		printf("Last digit of %d is %d and is less than 6\n", n, x);
	return (0);
}
