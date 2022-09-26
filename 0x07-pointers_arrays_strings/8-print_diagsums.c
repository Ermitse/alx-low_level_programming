#include "main.h"
#include<stdio.h>

/**
 * print_diagsum - prints 
 * @a: val
 * @size: size
 * Return: val
 */
void print_diagsums(int *a, int size)
{
	int i:
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}


