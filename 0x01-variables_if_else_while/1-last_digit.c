#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the entry point
 *
 * Description: assign a random number to the variable n
 * each time it is executed and print the last digit
 * of the number stored in the variable n
 *
 * Return: returns zero once completion successfully
 */

int main(void)
{
	int n, res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	res = n - (n / 10) * 10;

	if (res == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, res);
	}
	else if (res > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, res);
	}
	else if (res < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, res);
	}
	return (0);
}
