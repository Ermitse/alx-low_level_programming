#include<stdio.h>
#include "main.h"
/**
 * main - entry
 * @argc: count
 * @argv: array arg
 * Return: ret val
 */
int  main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
