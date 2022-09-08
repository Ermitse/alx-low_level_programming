#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;

	long long longlongType;

	long longType;

	float floatType;

	double doubleType;

	char charType;

	printf("Size of char: %c bytes\n", sizeof(charType));

	printf("Size of int: %d bytes\n", sizeof(intType));

	printf("Size of long: %zu bytes\n", sizeof(longType));

	printf("size of long long %zu byte(s)\n", sizeof(longlongType));

	printf("Size of float: %zu byte\n", sizeof(floatType));

	return (0);
}
