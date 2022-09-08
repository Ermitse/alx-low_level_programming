#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[70];	/*declaring a char*/

	strcpy(string, "\"Programming is like building a multilingual puzzle");

	puts(string);	/*prints the char stored in string*/
	return (0);
}
