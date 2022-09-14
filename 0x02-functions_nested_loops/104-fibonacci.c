#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 *
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, f3 = 0, n = 0;

	for (n = 0; n <= 98; n++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}

	printf("%lu\n", n);
	printf((",");
	printf(" ");
	{

	return (0);
	}
}
