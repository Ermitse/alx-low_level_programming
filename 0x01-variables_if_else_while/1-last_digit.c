#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include<stdio.h>


/**
 * main - Entry point
 *
 * Rerutn: 0
 */

int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	int s;

	s = n % 10;

	if (s > 5)
	{
	printf("the last digit of %d is %d and is greater than 5\n", n, s);
	}
	else if (s < 6 && s != 0)
	{
	printf("the last digit of %d is %d and is less than 6 and not 0\n", n, s)
	}
	else
	{
	printf("the last digit of %d is %d and is 0\n", n, s)
	}
	return (0);

}
