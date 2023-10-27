#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: imput
 * Return: Always 0 (success)
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *twe && *twe != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);

}
