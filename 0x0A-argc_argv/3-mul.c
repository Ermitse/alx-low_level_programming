#include "main.h"
#include<stdio.h>
#include <stdlib.h>
/**
 * main - entr
 * @argc: count
 * @argv: array arg
 * Return: rey val
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
