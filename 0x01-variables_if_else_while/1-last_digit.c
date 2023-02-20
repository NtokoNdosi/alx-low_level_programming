#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 * Return: Always (success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = (n % 10);

	if (lastd > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("last digit of %d is %d and is zero\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
	printf("last digit of %d is %d and is less than six not 0\n", n, lastd);
	}
	return (0);
}
