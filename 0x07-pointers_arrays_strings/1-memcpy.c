#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 *  Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int it;

	for (it = 0; it < n; it++)
	{
		dest[it] = src[it];
	}

	return (dest);

}
