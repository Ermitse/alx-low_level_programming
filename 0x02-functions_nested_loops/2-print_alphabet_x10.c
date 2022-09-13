#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet
 *
 * return: none
 *
 */

void print_alphabet_x10(void)
{
	char lc;
	int i;

	for  (i = 0; i < 10; i++)
	{

	for (lc = 'a'; lc <= 'z'; lc++)
	_putchar(lc);
	_putchar('\n');
	}
}
