#include"main.h"
/**
 * prin_alphabet(void) - entry point
 *
 * Description: this function prints the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet(void)

{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

}
