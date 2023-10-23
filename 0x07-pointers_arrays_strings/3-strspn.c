#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets thr lenght of a prefix subestring.
 * @s: string.
 * @accept: bytes.
 *  Return: unsigned int.
*/

unsigned int _strspn(char *s, char *accept);
{
	unsigned int it, its;

	for (it = 0; s[it] != '\0'; it++)
	{
		for (its = 0; accept[its] != s[it]; its++)
		{
			if (accept[its] == '\0')
				return (it);
		}
	}

	return (it);
}
