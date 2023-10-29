#include "main.h"
/**
 * _strlen - return the length of a string
 *
 * @s: string paramater input
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		++c;

	return (c);



}
