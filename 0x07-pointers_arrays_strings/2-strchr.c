#include "main.h"
#include <stdio.h>

/**
 * _strchr - fille memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 *  Return: pointer s
*/

char *_strchr(char *s, char c)
{
	int it;

	for (it = 0; s[it] >= '\0'; it++)
	{
		if (s[it] == c)
		{
			return (s + it);
		}

	}

	return ('\0');

}
