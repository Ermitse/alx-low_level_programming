#include "main.h"

/**
 * cap_string - capitaliza
 * @x: string
 * Return: val
 */

char *cap_string(char *)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 97 && x[i] < 122)
			x[i] = x[i] - 32;
	}
	return (x);
}
