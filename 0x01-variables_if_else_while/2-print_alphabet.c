#include <stdio.h>
/**
 * main - Entry point
 * Description:print print all aplhabet letters
 * Return: alawys 0 (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')

	{

		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}
