#include "main.h"
#include <stdio.h>

/**
 * leet - oncode a string into 1337
 * @c: string
 * Return: string that is encoded
*/

char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'o', 'T', 'l'};
	int va[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
		c++;
	}
	return (cp);
}
