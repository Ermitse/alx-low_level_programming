#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate
 * @ac: int
 * @av: int
 * Return: ret val
 */
char *argstostr(int ac, char **av)
{
	char *ma;
	int i, j, k, m;;

	if ( ac == 0)
		return (NULL);
	for (k = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	ma = malloc(sizeof(char) * (k + 1));
	if (ma == 0)
	{
		free(m);
		return (NULL);
	}
	for (i = j= m = 0; m < k; k++)
	{
		if (av[i][j] == '\0')
		{
			ma[m] = '\n';
			i++;
			m++;
			j = 0;
		}
		if (m < k - 1;
			ma[m] = av[i][j];
	}
	ma[m] = '\0';

	return (ma);
}
