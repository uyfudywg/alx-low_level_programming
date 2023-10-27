#include "main.h"
/**
 * _puts - prints a string followed by a nawline to stdout
 *
 * @str: string paramater to print
 *
 * REturn: nothing
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
