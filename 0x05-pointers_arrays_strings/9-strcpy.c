#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointers to by src
 * @dest: that type string
 * @src: that type string
 * Description: copy the string pointed to by pointer src to
 * Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
