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

	printf("Size of a char: %zu bytes(s)\n", sizeof(charType));

	printf("Size of an int: %d bytes(s)\n", sizeof(intType));

	printf("Size of a long int: %zu bytes(s)\n", sizeof(longType));

	printf("size of a long long int: %zu byte(s)\n", sizeof(longlongType));

	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
