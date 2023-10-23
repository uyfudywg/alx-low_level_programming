#include "main.h"
#include <stdio.h>

/**
 * _memset - fille memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: nax bytes to use
 *  Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int it;

	for (itr = 0; n > 0; it++, n--)
		s[it] = b;

	return (s);

}
