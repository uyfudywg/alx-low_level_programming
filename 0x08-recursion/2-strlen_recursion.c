#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return the length a string
 * @s: pointer the string
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int as = 0;

	if (*s > '\0')
	{
		as += _strlen_recursion(s + 1) + 1;
	}
	return (as);

}
