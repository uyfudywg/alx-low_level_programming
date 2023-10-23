#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - search a string for any of set bytes
 * @s: string
 * @accept: string to match
 * Return: P or 0
*/

char *_strpbrk(char *s, char *accept)
{
	int it, jt;

	char *p;

	it = 0;
	while (s[it] != '\0')
	{
		jt = 0;
		while (accept[jt] != '\0')
		{
			if (accept[jt] == s[it])
			{
				p = &s[it];
				return (p);
			}
			jt++;
		}
		it++;
	}
	return (0);
}
