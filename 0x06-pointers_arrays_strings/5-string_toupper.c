#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase lottors of a string to uppet
 *
 * @str: string to return.
 * Return: string.
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
