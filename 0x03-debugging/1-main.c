#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)/* an open while loop that always reads lessthan 10 */
	{
		putchar(i);/* an incrementation of "i" was needed here "i++" */
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);

}
