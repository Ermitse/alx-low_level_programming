#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char lc, uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
	putchar(lc);
	}
	putchar('\n');
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
	putchar(uc);
	}
	return (0);
}
