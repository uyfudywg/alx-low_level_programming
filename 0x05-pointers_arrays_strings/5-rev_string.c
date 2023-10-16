#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string paramater input
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int l, i;
	char te;

	/*find string length without null char */
	for (l = 0; s[l] != '\0'; ++l)

	/*swap the string by looping to half the string */
	for (i = 0; i < l / 2; i++)
	{
		te = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = te;
	}

}
