#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * print_array - entry
 * @a: int pointer
 * @n: int pointer
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		printf(",");
		printf(" ");
	}
	printf("\n");
}

