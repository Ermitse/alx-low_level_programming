#include<string.h>
#include "main.h"

/**
 * rev_string - string print
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int n, i, h;
	char t;

	for (n = 0; s[n] != '\0'; n++)
	
	i = 0;
	h = n / 2;

	while (h--)
	{
		t = s[n - i - 1];
		s[n - i - 1] = s[i];
		s[i] = t;
		i++;
	}
}
